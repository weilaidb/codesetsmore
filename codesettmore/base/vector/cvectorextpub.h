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

    vector<T> *newVec();
    WORD32 printVec(vector<T> &vec);
    WORD32 printVecReverse(vector<T> &vec);
    bool isEmpty(vector<T> &vec);
    bool isFull(vector<T> &vec);
    void push(vector<T> &vec, T val);
    WORD32 info(vector<T> &vec);
    WORD32 size(vector<T> &vec);
    WORD32 capacity(vector<T> &vec);
    WORD32 max_size(vector<T> &vec);
};

template<typename T>
vector<T> *CVectorExtPub<T>::newVec()
{
    return new vector<T>();
}

template<typename T>
WORD32 CVectorExtPub<T>::printVec(vector<T> &vec)
{
    int i = 0;
    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        ++i;
        cout << "No:" << setw(3)  << i << ", "<< *it << endl;
    }
    return vec.size();
}

template<typename T>
WORD32 CVectorExtPub<T>::printVecReverse(vector<T> &vec)
{
    int i = 0;
    for(auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        ++i;
        cout << "No:" << setw(3)  << i << ", "<< *it << endl;
    }
    return vec.size();
}

template<typename T>
bool CVectorExtPub<T>::isEmpty(vector<T> &vec)
{
    return 0 == vec.size();
}

template<typename T>
bool CVectorExtPub<T>::isFull(vector<T> &vec)
{
    return vec.size() > 0;
}

template<typename T>
WORD32 CVectorExtPub<T>::info(vector<T> &vec)
{
    cout << "vec.size():" << vec.size() << endl;
    cout << "vec.capacity():" << vec.capacity() << endl;
    cout << "vec.max_size():" << vec.max_size() << endl;

    return 0;
}

template<typename T>
WORD32 CVectorExtPub<T>::size(vector<T> &vec)
{
    return vec.size();
}

template<typename T>
WORD32 CVectorExtPub<T>::capacity(vector<T> &vec)
{
    return vec.capacity();
}

template<typename T>
WORD32 CVectorExtPub<T>::max_size(vector<T> &vec)
{
    return vec.max_size();
}

template<typename T>
void CVectorExtPub<T>::push(vector<T> &vec, T val)
{
    vec.push_back(val);
}


#endif // CVECTOREXTPUB_H
