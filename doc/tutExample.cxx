#include <iostream>
#include <tut.h>

// A template (not in the C++ sense!) file to help start a tut file to test a
// class.  Rename this file $MYPACKAGEROOT/test/tutMyTest.cxx, and change all
// instances of MyTest in this file to the name of your test.  A good
// convention is to use the name of the class you are testing.  For example,
// if you were testing the TClusterMatch class, you could go to your test
// directory and do
//
// sed -e 's/MyTest/TClusterMatch/g' $TESTBASEROOT/doc/tutExample.cxx >
// tutTClusterMatch.cxx
//

namespace tut {
    struct baseMyTest {
        baseMyTest() {
            // Run before each test.
        }
        ~baseMyTest() {
            // Run after each test.
        }
    };

    // Declare the test
    typedef test_group<baseMyTest>::object testMyTest;
    test_group<baseMyTest> groupMyTest("MyTest");

    template<> template<>
    void testMyTest::test<1> () {
        // Put your code for the first test here.
    }

    template<> template<>
    void testMyTest::test<1> () {
        // Put your code for the second test here.
    }
};
