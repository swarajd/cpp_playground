#include "gtest/gtest.h"
// #include <iostream>
#include "add/add.h"

class TestProj: public ::testing::Test {
    protected:

    int testint;

    void SetUp() override {
        testint = 2;
    }
};

TEST_F(TestProj, BasicTest) {
    // std::cout << "basic test" << std::endl;
    ASSERT_EQ(add(1, 1), testint);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}