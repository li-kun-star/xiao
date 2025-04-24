#include<iostream>
#include<Windows.h>
#include<chrono>
using namespace std;
/*鼠标点击间隔时常*/
std::chrono::milliseconds interval_time = std::chrono::milliseconds(500);
int main() {
	/*模拟鼠标按下和松开*/
	while (true) {
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);

		Sleep(interval_time.count());
	}
	return 0;
}
