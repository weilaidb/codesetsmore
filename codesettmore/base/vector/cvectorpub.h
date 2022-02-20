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
    static vector<int> *newVec();
    static WORD32 printVec(vector<int> &vec);
    static WORD32 printVecReverse(vector<int> &vec);
    static bool isEmpty(vector<int> &vec);
    static bool isFull(vector<int> &vec);
    static WORD32 info(vector<int> &vec);
    static WORD32 size(vector<int> &vec);
    static WORD32 capacity(vector<int> &vec);
    static WORD32 max_size(vector<int> &vec);
};

#endif // CVECTORPUB_H
