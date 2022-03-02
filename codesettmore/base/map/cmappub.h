#ifndef CMAPPUB_H
#define CMAPPUB_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include "cdefinepub.h"

using namespace std;

typedef map<int , string> MAP_INI_STRING;
typedef map<int , string>::iterator MAP_INI_STRING_ITER;
typedef map<int , string>::reverse_iterator  MAP_INI_STRING_ITER_R;

class CMapPub
{
public:
    CMapPub();

    void insert(int key, string value);
    void print();
    void printR();
    string find(int key);
    WORD32 size();
private:
    MAP_INI_STRING mapEntry;
};

#endif // CMAPPUB_H
