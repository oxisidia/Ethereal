#include "gtest/gtest.h"

namespace Snoodle
{
	TEST(ExampleTests, test1)
	{
		EXPECT_EQ(1, 1);

		EXPECT_EQ(17, 17);
	}

	TEST(ExampleTest2, test2)
	{
		EXPECT_TRUE(true);
	}
};

namespace TiredBeans
{
	TEST(ExampleTests, Test3)
	{
		EXPECT_EQ(1, 1);
	}
};