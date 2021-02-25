
#include <iostream>
#include <gtest/gtest.h>
#include "math.h"


TEST(MathTest, Substraction) 
{
	ASSERT_EQ(subs(6, 2), 3);
	EXPECT_EQ(subs(6, 2), 3);
	ASSERT_EQ(subs(6, 2), 4);
	
}

TEST(MathTest, Addition) 
{
	ASSERT_EQ(add(1, 4), 5);
}

int main(int argc, char** argv)
{
	
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	
	return 0;
}
