/*

The basic datatypes

*/

typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef float float32;
typedef double float64;

#ifndef _WIN32
#define strnicmp(x,y,c) strncasecmp(x,y,c)
#define stricmp(x,y) strcasecmp(x,y)
#endif

