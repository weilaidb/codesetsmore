#ifndef CSTRINGPUB_H
#define CSTRINGPUB_H

#include <iostream>
#include <string>
#include <vector>
#include "cdefinepub.h"

using namespace std;

class CStringPub
{
public:
    CStringPub();
    //获取屏幕输入的数据
    static string input();
    static string replace(string subject, const string& search,const string& replace);
    static void printlgenth(string str);
    static WORD32 length(string str);
    static void printlgenth(string tips, string str);
    static WORD32 findpos(string s, string findstr, vector<int> &vecpos);
    static void printvec(vector<int> &vec);
    static void vecsize(vector<int> &vec);
    static void vecsize(string tips, vector<int> &vec);
};

#endif // CSTRINGPUB_H
