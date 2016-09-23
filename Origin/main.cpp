#include <stdio.h>

#include "NTWindow.h"

using namespace illidan;

int __stdcall WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�ض��������־
	freopen("main.log", "w", stdout);

	//��������
	NTWindow::RegisterInstance(hInstance);
	NTWindow::RegisterNTWindowClass(L"OpenGL");

	NTWindow* pWindow = new NTWindow();
	pWindow->CreateNTWindow(L"OpenGL", L"Demo", 1280, 800);
	pWindow->UpdateNTWindow();

	NTWindow::ClearNTWindowClass();

	//�ر������־
	fclose(stdout);
	return 0;
}