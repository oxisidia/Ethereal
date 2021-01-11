// SimplePointExample.cpp
/* Demonstrates the manipulation of Ethereal point objects using various methods and hardware. 
*  Prints the results of each operation in the console following completion.*/

#include "SimplePointExample.h"
#include <Ethereal/Ethereal.h>
#include <Ethereal/PointDef.h>

using namespace Points;

int main()
{
	Ethereal::SayHello();

	Point3d p1(1, 0, 0);

	Point2d p2(5, 9);

	return 0;
}