#ifndef CMAPEXTPUB_H
#define CMAPEXTPUB_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include "cdefinepub.h"

using namespace std;

template <typename TK, typename TV>
class CMapExtPub
{
public:
    CMapExtPub();
    void insert(TK key, TV value);
    WORD32 remove(TK key);
    void print();
    void printR();
    void clear();
    WORD32 find(TK key,TV &value);
    WORD32 size();
private:
    map<TK , TV> mapEntry;
    typedef typename map<TK , TV>::iterator MAP_ITER;
    typedef typename map<TK , TV>::reverse_iterator MAP_ITER_R;
};

template <typename TK, typename TV>
CMapExtPub<TK,TV>::CMapExtPub()
{
    mapEntry.clear();
}

template <typename TK, typename TV>
void CMapExtPub<TK,TV>::insert(TK key, TV value)
{
    mapEntry.insert(pair < TK,TV > (key,value));
}

template <typename TK, typename TV>
WORD32 CMapExtPub<TK,TV>::remove(TK key)
{
    MAP_ITER l_it;
    l_it = mapEntry.find(key);
    if(l_it != mapEntry.end())
    {
        mapEntry.erase(l_it);
    }

    return 0;
}

template <typename TK, typename TV>
void CMapExtPub<TK,TV>::print()
{
    MAP_ITER it,itEnd;
    it = mapEntry.begin();
    itEnd = mapEntry.end();
    while (it != itEnd) {
        cout<<it->first<<' '<<it->second<<endl;
        it++;
    }
}

template <typename TK, typename TV>
void CMapExtPub<TK,TV>::printR()
{
    MAP_ITER_R iter;
    for(iter = mapEntry.rbegin(); iter != mapEntry.rend(); iter++)
        cout<<iter->first<<" "<<iter->second<<endl;
}

template <typename TK, typename TV>
void CMapExtPub<TK,TV>::clear()
{
    mapEntry.clear();
}

template <typename TK, typename TV>
WORD32 CMapExtPub<TK,TV>::find(TK key,TV &value)
{
    MAP_ITER l_it;;
    l_it = mapEntry.find(key);
    if(l_it != mapEntry.end())
    {
        value =  l_it->second;
    }

    return 0;
}

template <typename TK, typename TV>
WORD32 CMapExtPub<TK,TV>::size()
{
    return mapEntry.size();
}

#endif // CMAPEXTPUB_H
