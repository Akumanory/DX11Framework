#include "DirectXIncludes.h"
#include "Logs.h";
#include "Framework.h"

int WINAPI main(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	Logs::Debug("Main call"); // Тестовый лог

	Framework framework; 
	
	if (framework.Initialize(hInstance, "Test window", 1600, 900))
	{
		Logs::Debug("Start ProcessMessage"); // Тестовый лог
		while (framework.ProcessMessages())
		{
			framework.Update();
			framework.RenderFrame();
		}
		Logs::Debug("End ProcessMessage"); // Тестовый лог
	}

	return 0;
};