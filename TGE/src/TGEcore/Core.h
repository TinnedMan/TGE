//-----MACROS-------//
#pragma once
#ifdef TGE_PLATFORM_WINDOWS
	#ifdef TGE_BUILD_DLL
		#define TGE_API __declspec(dllexport)
	#else 
		#define	TGE_API __declspec(dllimport)
	#endif // TGE_BUILD_DLL
	
#endif // TGE_PLATFORM_WINDOWS
