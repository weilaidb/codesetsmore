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
    static WORD32 printVec(vector<int> vec);
};

#endif // CVECTORPUB_H
