#include "cstringpubtest.h"
#include "cvectorpub.h"
#include "gmock/gmock.h"

using namespace testing;

class AnCVectorPub: public Test {
public:
    CVectorPub actor;
};


TEST_F(AnCVectorPub, printVecReturnSize) {
    vector<int> vectest;
    vectest.push_back(10);
    vectest.push_back(10);
   ASSERT_THAT(actor.printVec(vectest), Eq(2));
}





