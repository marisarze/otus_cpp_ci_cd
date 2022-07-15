#include "lib.h"
#include "gtest/gtest.h"
#include "version.h"


TEST(TestSimple, TestVersion){
    auto result = version()+1;
    auto expected = PROJECT_VERSION_PATCH;
    EXPECT_EQ(result, expected);
}