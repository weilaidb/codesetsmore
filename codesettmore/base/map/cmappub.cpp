#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include "cmappub.h"


CMapPub::CMapPub()
{
    mapEntry.clear();
}

void CMapPub::insert(int key, string value)
{
    mapEntry.insert(pair < int,string > (key,value));
}

string CMapPub::remove(int key)
{
    MAP_INI_STRING_ITER l_it;
    l_it = mapEntry.find(key);
    if(l_it == mapEntry.end())
        return "";
    else
        mapEntry.erase(l_it);

    return "";
}

void CMapPub::print()
{
    MAP_INI_STRING_ITER it,itEnd;
    it = mapEntry.begin();
    itEnd = mapEntry.end();
    while (it != itEnd) {
        cout<<it->first<<' '<<it->second<<endl;
        it++;
    }
}

void CMapPub::printR()
{
    MAP_INI_STRING_ITER_R iter;
    for(iter = mapEntry.rbegin(); iter != mapEntry.rend(); iter++)
        cout<<iter->first<<"  "<<iter->second<<endl;
}

void CMapPub::clear()
{
    mapEntry.clear();
}

string CMapPub::find(int key)
{
    MAP_INI_STRING_ITER l_it;;
    l_it = mapEntry.find(key);
    if(l_it == mapEntry.end())
        return "";
    else
        return l_it->second;
}

WORD32 CMapPub::size()
{
    return mapEntry.size();
}
