#pragma once
#ifdef TENGU_PLATFORM_WINDOW
	#ifdef TENGU_BUILD_DLL
	    #define TENGU_API __declspec(dllexport)
	#else
        #define TENGU_API __declspec(dllimport)
    #endif // TENGU_PLATFORM_WINDOW
#else
		#error TENGU ONLY SUPPORT WINODW
#endif