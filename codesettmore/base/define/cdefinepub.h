#ifndef CDEFINEPUB_H
#define CDEFINEPUB_H


//#define TRACE
#ifndef TRACE
 #define tout 0 && cout//或者NULL && cout
#else
 #define tout cout
#endif

//永久打印
#define toutever cout



typedef char CHAR;
typedef unsigned char BYTE;

typedef char INT8;
typedef short INT16;
typedef int INT32;
typedef long long INT64;

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef unsigned long long UINT64;

typedef unsigned short WORD;
typedef unsigned short WORD16;
typedef unsigned int   WORD32;
typedef unsigned long long WORD64;



class CDefinePub
{
public:
    CDefinePub();
};

#endif // CDEFINEPUB_H
