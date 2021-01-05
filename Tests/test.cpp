#include "gtest/gtest.h"

namespace PointTests
{
	namespace SingleThreaded
	{
		TEST(PointTests, Creation)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, Copy)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, Distance)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, Translation)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, Transposition)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, Deletion)
		{
			EXPECT_EQ(1, 1);
		}
	};

	namespace MultiThreaded
	{
		TEST(PointTests, CreationMulti)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, CopyMulti)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, DistanceMulti)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, TranslationMulti)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, TranspositionMulti)
		{
			EXPECT_EQ(1, 1);
		}

		TEST(PointTests, DeletionMulti)
		{
			EXPECT_EQ(1, 1);
		}
	};
};