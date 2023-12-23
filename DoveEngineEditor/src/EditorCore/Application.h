#pragma once
#include "Core.h"
namespace DoveEngineEditor
{
	class __declspec(dllexport) Application
	{
	public:
		Application();
		~Application();

		void Print();
		void Run();
	};

	// 仅作占位，project中define
	Application* CreateApplication();
}
 