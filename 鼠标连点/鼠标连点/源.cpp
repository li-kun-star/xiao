#include<iostream>
#include<Windows.h>
#include<chrono>
using namespace std;
/*��������ʱ��*/
std::chrono::milliseconds interval_time = std::chrono::milliseconds(500);
int main() {
	/*ģ����갴�º��ɿ�*/
	while (true) {
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);

		Sleep(interval_time.count());
	}
	return 0;
}
