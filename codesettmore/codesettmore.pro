TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        base/define/cdefinepub.cpp \
        base/string/cstringpub.cpp \
        base/vector/cvectorpub.cpp \
        main.cpp \
        test/cstringpubtest.cpp \
        test/cvectorpubtest.cpp \
        testmain.cpp

HEADERS += \
    base/define/cdefinepub.h \
    base/string/cstringpub.h \
    base/vector/cvectorpub.h \
    test/cstringpubtest.h

INCLUDEPATH +=  \
               base/define/ \
               base/string/ \
               base/vector/ \





#Gmock添加源代码
INCLUDEPATH += "module/gmock_170/src/gmock/gtest/include/"
INCLUDEPATH += "module/gmock_170/src/gmock/gtest/"
#INCLUDEPATH += "module/gmock_170/src/../../"
INCLUDEPATH += "module/gmock_170/src/gmock/include/gmock/"
INCLUDEPATH += "module/gmock_170/src/gmock/include/"
INCLUDEPATH += "module/gmock_170/src/gmock/"


SOURCES += \
    module/gmock_170/src/gmock/gtest/src/gtest-typed-test.cc \
    module/gmock_170/src/gmock/gtest/src/gtest-test-part.cc \
    module/gmock_170/src/gmock/gtest/src/gtest-printers.cc \
    module/gmock_170/src/gmock/gtest/src/gtest-port.cc \
    module/gmock_170/src/gmock/gtest/src/gtest-filepath.cc \
    module/gmock_170/src/gmock/gtest/src/gtest-death-test.cc \
    module/gmock_170/src/gmock/gtest/src/gtest-all.cc \
    module/gmock_170/src/gmock/gtest/src/gtest.cc \
    module/gmock_170/src/gmock/src/gmock-spec-builders.cc \
    module/gmock_170/src/gmock/src/gmock-matchers.cc \
    module/gmock_170/src/gmock/src/gmock-cardinalities.cc \
    module/gmock_170/src/gmock/src/gmock-all.cc \
    module/gmock_170/src/gmock/src/gmock.cc \
    module/gmock_170/src/gmock/src/gmock-internal-utils.cc

























#添加gmock库，编译不过
#debug {
#INCLUDEPATH += module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/include/
#INCLUDEPATH += module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/include/gmock
#INCLUDEPATH += module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/include/gmock/internal
#INCLUDEPATH += module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/include/gtest/
#INCLUDEPATH += module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/include/gtest/internal

#LIBS += -L$$PWD/module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/ -llibmock
#}
#release {
#INCLUDEPATH += module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Release/include/

#LIBS += -L$$PWD/module/gmock_170/build-libmock-Desktop_Qt_5_14_2_MinGW_64_bit-Release/ -lmock
#}

