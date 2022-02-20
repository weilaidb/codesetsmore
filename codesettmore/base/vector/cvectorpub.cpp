#include "cvectorpub.h"

CVectorPub::CVectorPub()
{

}

WORD32 CVectorPub::printVec(vector<int> vec)
{
    int i = 0;
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++)
    {
        ++i;
        cout << "No:" << setw(3)  << i << ", "<< *it << endl;
    }
    return vec.size();
}
