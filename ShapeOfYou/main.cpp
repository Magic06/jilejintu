#include <Windows.h>
#include <graphics.h>
#include <mmsystem.h>//�������ֵ�ͷ�ļ�
#pragma comment(lib,"winmm.lib")//����������Ҫ�Ŀ��ļ�winmm.lib
int main(void) {
	initgraph(900,600);
	loadimage(0, _T("photo.jpg"),900,600);
	//�ظ�����
	mciSendString(_T("play ���־���.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}