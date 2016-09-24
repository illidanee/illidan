#pragma warning(disable:4996)

#include <stdio.h>

#include "NTWindow.h"
#include "OpenGLWindow.h"


using namespace illidan;

INT WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�ض��������־
	freopen("main.log", "w", stdout);

	//ע��NTWindow��Ϣ
	NTWindow::RegisterInstance(hInstance);
	NTWindow::RegisterNTWindowClass(L"OpenGL");

	//����NTWindow����
	NTWindow* pWindow = NTWindow::CreateNTWindow<OpenGLWindow>(L"OpenGL", L"Demo", 1280, 800);
	pWindow->UpdateNTWindow();

	//���NTWindow��Ϣ
	NTWindow::ClearNTWindowClass();

	//�ر������־
	fclose(stdout);
	return 0;
}