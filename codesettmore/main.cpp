#ifndef TESTGMOCK

#include <iostream>
#include "cstringpub.h"
#include "cvectorextpub.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string input = CStringPub::input();
    cout << "input:" << input << endl;
    input = CStringPub::replace(input, " ","");
    cout << "filter input:" << input << endl;
    CStringPub::printlength("last input len", input);

    vector<int> posvec;
    CStringPub::findpos(input, "ABCD", posvec);
    CStringPub::printvec(posvec);


    cout << "replace text" << CStringPub::replace("abcdefaaaaa","a","dddd") << endl;

    CVectorExtPub<int> actorext;
    vector<int> empty;

    actorext.isEmpty(empty);
    actorext.isEmpty(empty);
    actorext.isFull(empty);
//    CVectorExtPub<int>::isFull(empty);
//    CVectorExtPub<int>::isFull(empty);

    int i = 0;
    for(auto it = empty.begin(); it != empty.end(); it++)
    {
        ++i;
        cout << "No:" << setw(3)  << i << ", "<< *it << endl;
    }

    return 0;
}

#endif
