#include <algorithm>
#include <string>

#include "gmock/gmock.h"
#include "cmapextpub.h"

using namespace std;
using namespace testing;

class AnCMapExtPub: public Test {
public:
   CMapExtPub<float,string> actor;
};

TEST_F(AnCMapExtPub, empty) {
   ASSERT_THAT(actor.size(), Eq(0));
}


TEST_F(AnCMapExtPub, haveitems) {
    actor.insert(1.3,"hello");
    ASSERT_THAT(actor.size(), Eq(1));
}

TEST_F(AnCMapExtPub, insertReaptedNoEffect) {
    actor.insert(1.3,"hello");
    actor.insert(1.3,"hello the world");
    string retvalue("");
    ASSERT_THAT(actor.find(1.3, retvalue), Eq(0));
    ASSERT_THAT(retvalue, Eq("hello"));
    ASSERT_THAT(actor.size(), Eq(1));
}

TEST_F(AnCMapExtPub, deleteitems) {
    actor.insert(1.3,"hello");
    ASSERT_THAT(actor.size(), Eq(1));
    actor.remove(1.3);
    ASSERT_THAT(actor.size(), Eq(0));
}

TEST_F(AnCMapExtPub, clearitems) {
    actor.insert(1.3,"hello");
    actor.insert(2.3,"hello2");
    actor.insert(3.3,"hello3");
    ASSERT_THAT(actor.size(), Eq(3));
    actor.clear();
    ASSERT_THAT(actor.size(), Eq(0));
}

TEST_F(AnCMapExtPub, printitems) {
    actor.insert(1.3,"hello");
    actor.insert(2.3,"hello2");
    actor.insert(3.3,"hello3");
    actor.print();
    actor.printR();
    ASSERT_THAT(actor.size(), Eq(3));
    actor.clear();
    ASSERT_THAT(actor.size(), Eq(0));
}


