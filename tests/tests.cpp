/*
    Author: Sumeet Singh
    Dated: 22/02/2024
    Minimum C++ Standard: C++11
    Purpose: Test main.cpp file
    License: MIT License
    Description: Read README.md for more details
*/

#include <gtest/gtest.h>
// #include <../headers/adding.hpp>

class mainTest : public ::testing::Test { 
    protected:
        void SetUp() override {

        }
        void TearDown() override {
            
        }
};

TEST_F(mainTest, adds_two_numbers_correctly) {
    int a = 1;
    int b = 2;
    // int results = add(a, b);
    EXPECT_EQ(a + b, 3);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}