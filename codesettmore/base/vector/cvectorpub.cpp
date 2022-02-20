#include "cvectorpub.h"

CVectorPub::CVectorPub()
{

}

WORD32 CVectorPub::printVec(vector<int> &vec)
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

WORD32 CVectorPub::printVecReverse(vector<int> &vec)
{
    int i = 0;
    vector<int>::reverse_iterator it;
    for(it = vec.rbegin(); it != vec.rend(); it++)
    {
        ++i;
        cout << "No:" << setw(3)  << i << ", "<< *it << endl;
    }
    return vec.size();
}

bool CVectorPub::isEmpty(vector<int> &vec)
{
    return 0 == vec.size();
}

bool CVectorPub::isFull(vector<int> &vec)
{
    return 0 != vec.size();
}

WORD32 CVectorPub::info(vector<int> &vec)
{
    cout << "vec.size():" << vec.size() << endl;
    cout << "vec.capacity():" << vec.capacity() << endl;
    cout << "vec.max_size():" << vec.max_size() << endl;

    return 0;
}

WORD32 CVectorPub::size(vector<int> &vec)
{
    return vec.size();
}

WORD32 CVectorPub::capacity(vector<int> &vec)
{
    return vec.capacity();
}

WORD32 CVectorPub::max_size(vector<int> &vec)
{
    return vec.max_size();
}

vector<int> *CVectorPub::newVec()
{
    return new vector<int>();
}
