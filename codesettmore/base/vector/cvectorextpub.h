#ifndef CVECTOREXTPUB_H
#define CVECTOREXTPUB_H

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "cdefinepub.h"

using namespace std;

template <typename T>
class CVectorExtPub
{
public:
    CVectorExtPub(){};

//    static vector<T> *newVec();
//    static WORD32 printVec(vector<int> &vec);
//    static WORD32 printVecReverse(vector<int> &vec);
    bool isEmpty(vector<T> &vec)
    {
        return 0 == vec.size();
    }


    bool isFull(vector<T> &vec)
    {
        return vec.size() > 0;
    }
//    static WORD32 info(vector<int> &vec);
//    static WORD32 size(vector<int> &vec);
//    static WORD32 capacity(vector<int> &vec);
//    static WORD32 max_size(vector<int> &vec);
};

#endif // CVECTOREXTPUB_H
