#include "gmock/gmock.h"
#include "cstringpubtest.h"
#include "cvectorpub.h"

using namespace testing;

class AnCVectorPub: public Test {
public:
    CVectorPub actor;
    vector<int> vecempty;
    vector<int> *pvectest;

    void SetUp() override
    {
        int dwLp = 10;
        pvectest = actor.newVec();
        pvectest->push_back(dwLp++);
        pvectest->push_back(dwLp++);
        pvectest->push_back(dwLp++);
        pvectest->push_back(dwLp++);
        pvectest->push_back(dwLp++);
    }

    void TearDown() override
    {
        pvectest->clear();
        delete pvectest;
    }
};


TEST_F(AnCVectorPub, printVecReturnSize) {
    vector<int> vectest;
    ASSERT_THAT(actor.isEmpty(vecempty), Eq(true));
    ASSERT_THAT(actor.printVec(*pvectest), Eq(5));
    ASSERT_THAT(actor.printVecReverse(*pvectest), Eq(5));
    ASSERT_THAT(actor.isFull(*pvectest), Eq(true));
}



TEST_F(AnCVectorPub, SomeInfo) {
    ASSERT_THAT(actor.info(vecempty), Eq(0));
}


