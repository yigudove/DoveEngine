#pragma once

#ifdef DOVEENGINE_PLATFORM_WINDOWS
	#ifdef DOVEENGINE_BUILD_DLL
		#define DOVEENGINE_API __declspec(dllexport)
	#else 
		#define DOVEENGINE_API __declspec(dllimport)
#endif 
#else
	// #error Only Support Windows
#endif