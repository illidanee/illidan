#pragma warning(disable:4996)

#include <stdio.h>

#include "Lua.h"
#include "NTWindow.h"
#include "OpenGLWindow.h"


using namespace illidan;

INT WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�ض��������־
	freopen("main.log", "w", stdout);

	////����Lua����
	//Lua* lua = new Lua();
	//lua->Init();
	//lua->CallFile("main.lua");
	//lua->CallFunction("Test");

	//ע��NTWindow��Ϣ
	NTWindow::RegisterInstance(hInstance);
	NTWindow::RegisterNTWindowClass(L"OpenGL");

	//����NTWindow����
	NTWindow* pWindow = NTWindow::CreateNTWindow<OpenGLWindow>(L"OpenGL", L"Demo", 1280, 800);
	pWindow->Init();
	pWindow->UpdateNTWindow();
	pWindow->Destroy();

	//���NTWindow��Ϣ
	NTWindow::ClearNTWindow();
	NTWindow::ClearNTWindowClass();

	////���Lua����
	//lua->Destroy();
	//delete lua;

	//�ر������־
	fclose(stdout);
	return 0;
}