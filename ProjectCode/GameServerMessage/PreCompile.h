#pragma once


// OS �⺻
#include <WS2tcpip.h> 
#include <WinSock2.h>
#include <Windows.h> 
#include <MSWSock.h>

// ������
#include <thread>
#include <mutex>
#include <memory>
#include <process.h>
#include <atomic>

// ����
#include <math.h>
#include <random>

// �ڷᱸ��
#include <list>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <sstream>
#include <deque>

// �����
#include <functional>
#include <assert.h>
#include <crtdbg.h>


#pragma comment (lib, "ws2_32") 
#pragma comment (lib, "mswsock.lib")