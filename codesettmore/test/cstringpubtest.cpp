#include "cstringpubtest.h"
#include "cstringpub.h"
#include "gmock/gmock.h"

using namespace testing;

class AnCStringPub: public Test {
public:
    CStringPub actor;
};

TEST_F(AnCStringPub, length) {
    ASSERT_THAT(actor.length("1234567890"), 10);
    ASSERT_THAT(actor.length("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"),  52);
    ASSERT_THAT(actor.length("?>:;'''$%^"),10);
    ASSERT_THAT(actor.length(""),0);
}

TEST_F(AnCStringPub, replaceStringWithSome) {
    ASSERT_THAT(actor.replace("hello, world","hello","weilaidb"), Eq("weilaidb, world"));
    ASSERT_THAT(actor.replace("hello, world","o","xyz"), Eq("hellxyz, wxyzrld"));
}

TEST_F(AnCStringPub, findposStringWithSome) {

    vector<int> vecpos;
    ASSERT_THAT(actor.findpos("hello, the world","x",vecpos), Eq(0));
    ASSERT_THAT(actor.findpos("hello, the world","o",vecpos), Eq(2));
    ASSERT_THAT(actor.findpos("hello, the world","l",vecpos), Eq(3));
    ASSERT_THAT(actor.findpos("hello, the world","hello",vecpos), Eq(1));
}


