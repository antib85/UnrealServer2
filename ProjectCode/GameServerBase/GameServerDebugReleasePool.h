#pragma once
#ifdef _DEBUG
#include <deque>
#include <mutex>

template<typename DataType>
class GameServerDebugReleasePool
{
public:
	void Push(DataType* _Data)
	{
		std::lock_guard<std::mutex> lock(QueueLock_);
		poolQueue_.push_front(_Data);
	}



public:
	GameServerDebugReleasePool() {}
	~GameServerDebugReleasePool()
	{
		for (DataType* Data : poolQueue_)
		{
			delete Data;
		}
	}

	GameServerDebugReleasePool(const GameServerDebugReleasePool& _Other) = delete;
	GameServerDebugReleasePool(GameServerDebugReleasePool&& _Other)
	{
	}

protected:
	GameServerDebugReleasePool& operator=(const GameServerDebugReleasePool& _Other) = delete;
	GameServerDebugReleasePool& operator=(GameServerDebugReleasePool&& _Other) = delete;

private:
	std::deque<DataType*> poolQueue_;
	std::mutex QueueLock_;

};


#endif