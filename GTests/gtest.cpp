#include <iostream>
#include "../Library/Evolventa.h"
#include "gtest/gtest.h"

const double ERROR_RATE = 0.0001;

// Constructors
TEST(Constructors, DefaultConstructor) {
    Evolventa line;
    EXPECT_NEAR(0.0,line.getPhi(), ERROR_RATE);
    EXPECT_NEAR(0.0, line.getRb(), ERROR_RATE);
}



int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}