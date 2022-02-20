#ifndef CVECTORPUB_H
#define CVECTORPUB_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "cdefinepub.h"

using namespace std;

class CVectorPub
{
public:
    CVectorPub();
    static WORD32 printVec(vector<int> &vec);
    static WORD32 printVecReverse(vector<int> &vec);
    static bool isEmpty(vector<int> &vec);
    static bool isFull(vector<int> &vec);
    static WORD32 info(vector<int> &vec);
    static vector<int> *newVec();
};

#endif // CVECTORPUB_H
