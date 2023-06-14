#pragma once




#ifdef RC_PLATFORM_WINDOWS
	#ifdef RC_BUILD_DLL
		#define ROCHER_API __declspec(dllexport)
	#else
		#define ROCHER_API __declspec(dllimport)
	#endif // DEBUG
#else
	#error The Game Engine only supports Windows
#endif // 
