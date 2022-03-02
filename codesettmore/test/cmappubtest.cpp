#include <algorithm>
#include <string>

#include "gmock/gmock.h"
#include "cmappub.h"

using namespace std;
using namespace testing;

class AnCMapPub: public Test {
public:
   CMapPub actor;
};

TEST_F(AnCMapPub, empty) {
   ASSERT_THAT(actor.size(), Eq(0));
}


TEST_F(AnCMapPub, haveitems) {
    actor.insert(1,"hello");
    ASSERT_THAT(actor.size(), Eq(1));
}

TEST_F(AnCMapPub, insertReaptedNoEffect) {
    actor.insert(1,"hello");
    actor.insert(1,"hello the world");
    ASSERT_THAT(actor.find(1), Eq("hello"));
    ASSERT_THAT(actor.size(), Eq(1));
}


