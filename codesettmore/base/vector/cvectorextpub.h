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

    vector<T> *newVec()
    {
        return new vector<T>();
    }

    WORD32 printVec(vector<T> &vec)
    {
        int i = 0;
        for(auto it = vec.begin(); it != vec.end(); it++)
        {
            ++i;
            cout << "No:" << setw(3)  << i << ", "<< *it << endl;
        }
        return vec.size();
    }

    WORD32 printVecReverse(vector<T> &vec)
    {
        int i = 0;
        for(auto it = vec.rbegin(); it != vec.rend(); it++)
        {
            ++i;
            cout << "No:" << setw(3)  << i << ", "<< *it << endl;
        }
        return vec.size();
    }

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
