#include "gmock/gmock.h"
#include "cstringpubtest.h"
#include "cvectorextpub.h"

using namespace testing;

class AnCVectorExtPub: public Test {
public:
    CVectorExtPub<int> actor;
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



TEST_F(AnCVectorExtPub, printVecReturnSize) {
    vector<int> vectest;
    ASSERT_THAT(actor.isEmpty(vecempty), Eq(true));
    ASSERT_THAT(actor.printVec(*pvectest), Eq(5));
    ASSERT_THAT(actor.printVecReverse(*pvectest), Eq(5));
    ASSERT_THAT(actor.isFull(*pvectest), Eq(true));
}



TEST_F(AnCVectorExtPub, SomeInfo) {
    ASSERT_THAT(actor.info(vecempty), Eq(0));
    ASSERT_THAT(actor.info(*pvectest), Eq(0));
    ASSERT_THAT(actor.size(*pvectest), Eq(5));
    ASSERT_THAT(actor.capacity(*pvectest), Ge(5));
    ASSERT_THAT(actor.max_size(*pvectest), Ge(5));
}


