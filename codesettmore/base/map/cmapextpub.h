#ifndef CMAPEXTPUB_H
#define CMAPEXTPUB_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include "cdefinepub.h"

using namespace std;

//template <typename K, typename Y>
//typedef map<int , string> MAP_INI_STRING;
//typedef map<int , string>::iterator MAP_INI_STRING_ITER;
//typedef map<int , string>::reverse_iterator  MAP_INI_STRING_ITER_R;

template <typename k, typename v>
class CMapExtPub
{
public:
    CMapExtPub();
//    void insert(int key, string value);
//    WORD32 remove(int key);
//    void print();
//    void printR();
//    void clear();
//    string find(int key);
//    WORD32 size();
private:
    map<k , v> mapEntry;
//    map<k , v>::iterator MAP_ITER;
//    map<k , v>::reverse_iterator MAP_ITER_R;

};

template <typename k, typename v>
CMapExtPub<k,v>::CMapExtPub()
{

}

#endif // CMAPEXTPUB_H
