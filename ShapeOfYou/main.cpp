#include <Windows.h>
#include <graphics.h>
#include <mmsystem.h>//播放音乐的头文件
#pragma comment(lib,"winmm.lib")//加载音乐需要的库文件winmm.lib
int main(void) {
	initgraph(900,600);
	loadimage(0, _T("photo.jpg"),900,600);
	//重复播放
	mciSendString(_T("play 极乐净土.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}