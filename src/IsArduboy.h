#pragma once

#if (defined(ARDUBOY_10) || defined(AB_DEVKIT))
	#define IS_ARDUBOY true
#else
	#define IS_ARDUBOY false
#endif