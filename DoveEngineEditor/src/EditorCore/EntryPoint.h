#pragma once
#include <iostream>
//#ifdef DOVEENGINE_PLATFORM_WINDOWS 
//	
//
//#endif

int main(int argc, char** argv)
{
	// printf("启动啦！");
	// DoveEngineEditor::Log::Init();
	auto app = DoveEngineEditor::CreateApplication();
	app->Run();
	delete app;
}