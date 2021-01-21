#include "gtest/gtest.h"
#include <Ethereal/PointDef.h>
#include <thread>

namespace PointTests
{
	using namespace Points;

	namespace SingleThreaded
	{
		TEST(PointTests, Creation)
		{
			//Test creating a point at the coordinates below. Confirm equality.
			const auto ExpectedX = 1.0, ExpectedY = -7.5, ExpectedZ = 3.1416;

			Point3d P1(1.0, -7.5, 3.1416); //Create the point

			//Test the individual coordinates.

			EXPECT_EQ(P1.x(), ExpectedX);

			EXPECT_EQ(P1.y(), ExpectedY);

			EXPECT_EQ(P1.z(), ExpectedZ);
		}

		TEST(PointTests, Distance)
		{
			//Single coord. distance test.

			Point3d P1(0, 0, 0);

			const auto DistX = 49, DistY = 8, DistZ = 16;

			Point3d P2(DistX, 0, 0);

			EXPECT_EQ(P2.norm(), DistX);

			P2 = Point3d(0, -DistY, 0);

			EXPECT_EQ(P2.norm(), DistY);

			P2 = Point3d(0, 0, -DistZ);

			EXPECT_EQ(P2.norm(), DistZ);

			//Zero vect

			P2 = Point3d(0, 0, 0);

			EXPECT_EQ(P2.norm(), 0);

			//3D distance

			const auto Dist = 6*sqrt(3);

			P1 = Point3d(1, 1, 1);

			P2 = Point3d(7, 7, 7);

			EXPECT_EQ(Distance(P1, P2), Dist);
		}

		TEST(PointTests, Translation)
		{
			//Single coord tests

			Point3d P1(0, 0, 0);

			Vector3d XTranslator(1, 0, 0);

			Vector3d YTranslator(0, 1, 0);

			Vector3d ZTranslator(0, 0, 1);

			Point3d XResult = P1 + XTranslator;

			EXPECT_EQ(XResult, Point3d(1, 0, 0));

			Point3d YResult = P1 + YTranslator;

			EXPECT_EQ(YResult, Point3d(0, 1, 0));

			Point3d ZResult = P1 + ZTranslator;

			EXPECT_EQ(ZResult, Point3d(0, 0, 1));

			//Test 3D translation.

			P1 = Point3d(1, 0, 0);

			Vector3d DiagTranslator(1, 1, 1);

			Point3d DiagResult = P1 + DiagTranslator;

			Point3d ExpectedResult(2, 1, 1);

			EXPECT_EQ(DiagResult, ExpectedResult);
		}

		/// Todo:
		TEST(PointTests, Transposition)
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
	};
};