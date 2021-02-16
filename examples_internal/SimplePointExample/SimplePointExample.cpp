// SimplePointExample.cpp
/* Demonstrates the manipulation of Ethereal point objects using various methods and hardware. 
*  Prints the results of each operation in the console following completion.*/

#include "SimplePointExample.h"
#include <Ethereal/Ethereal.h>
#include <Ethereal/Points/PointDef.h>

using namespace Points;

///<summary>Translaates points by a fixed amount. </summary>
Point3d TransformTest(Point3d Point)
{
	Vector4d Vect(Point.x(), Point.y(), Point.z(), 1); //Create a '4d' vector with a one in the 4th position and the xyz coordinates in the 1-3 position.

	Matrix4d Transform; //Create a 4x4 matrix to to transform the point.

	const auto Xoffset = 6, Yoffset = -9, Zoffset = 1;

	//Populate the transformation matrix.

	Transform << 1, 0, 0, Xoffset,
		0, 1, 0, Yoffset,
		0, 0, 1, Zoffset,
		0, 0, 0, 1;

	Vector4d Result4d = Transform * Vect; //Apply the transformation, remeber that multiplication is Matrix * vector not the other way.

	return Point3d(Result4d.x(), Result4d.y(), Result4d.z()); //Cast back into a point3d object and return.
}

///<summary>Transforms points using a triplet of matrices not particularly efficient.</summary>
Point3d TransformTest2(Point3d Point)
{
	Vector4d Vect(Point.x(), Point.y(), Point.z(), 1); //Create a '4d' vector with a one in the 4th position and the xyz coordinates in the 1-3 position.

	Matrix4d TransformZ; //Create a 4x4 matrix to to transform the point.

	Matrix4d TransformY;

	Matrix4d TransformX;

	//Populate the transformation matrix.

	double thetaX = Ethereal::Pi / 2;

	double thetaY = Ethereal::Pi / 3;

	double thetaZ = Ethereal::Pi / 6;

	TransformZ << cos(thetaZ), -sin(thetaZ), 0, 0,
		sin(thetaZ), cos(thetaZ), 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1;

	TransformY << cos(thetaY), 0, sin(thetaY), 0,
		0, 1, 0, 0,
		-sin(thetaY), 0, cos(thetaY), 0,
		0, 0, 0, 1;

	TransformX << 1, 0, 0, 0,
		0, cos(thetaX), -sin(thetaX), 0,
		0, sin(thetaX), cos(thetaX), 0,
		0, 0, 0, 1;

	Vector4d Result4d = TransformZ * Vect; //Apply the transformation, remeber that multiplication is Matrix * vector not the other way.

	Result4d = TransformX * Result4d;

	Result4d = TransformY * Result4d;


	return Point3d(Result4d.x(), Result4d.y(), Result4d.z()); //Cast back into a point3d object and return.
}

/// <summary>
/// Transforms the input point around an abritrary axis.
/// </summary>
Point3d TransformTest3(Point3d Point)
{
	using namespace std;

	Matrix3d Transform; 

	auto t = Ethereal::Pi / 2;

	Vector3d Axis(0, 0, 1);

	//Use the derived 3d transformation matrix.

	Transform <<

		cos(t) + pow(Axis.x(), 2) * (1 - cos(t)), Axis.x()* Axis.y()* (1 - cos(t)) - Axis.z() * sin(t), Axis.x() * Axis.z() * (1 - cos(t)) + Axis.y() * sin(t),

		Axis.y() * Axis.x() * (1 - cos(t)) + Axis.z() * sin(t), cos(t) + pow(Axis.y(), 2) * (1 - cos(t)), Axis.y() * Axis.z() * (1 - cos(t)) - Axis.x() * sin(t),

		Axis.z() * Axis.x() * (1 - cos(t)) - Axis.y() * sin(t), Axis.z() * Axis.y() * (1 - cos(t)) + Axis.x() * sin(t), cos(t) + pow(Axis.z(), 2) * (1 - cos(t)); 

	Point3d Result = Transform * Point; //Apply the transformation and return the point.

	return Result; 
}

Point3d TransformTest4(Point3d Point)
{
	using namespace std; //Include std for quick access to the power function. 

	auto t = Ethereal::Pi / 2; //specify an angle of aprox half pi.

	Vector3d Axis(0, 0, 1); //Define an axis.

	Vector3d Translation(1, 1, 1); //Define a translation axis.

	Matrix4d Transform; //Define the translation matrix.

	//Populate the translation matrix.

	Transform <<

		cos(t) + pow(Axis.x(), 2) * (1 - cos(t)), Axis.x()* Axis.y()* (1 - cos(t)) - Axis.z() * sin(t), Axis.x()* Axis.z()* (1 - cos(t)) + Axis.y() * sin(t), Translation.x(),

		Axis.y()* Axis.x()* (1 - cos(t)) + Axis.z() * sin(t), cos(t) + pow(Axis.y(), 2) * (1 - cos(t)), Axis.y()* Axis.z()* (1 - cos(t)) - Axis.x() * sin(t), Translation.y(),

		Axis.z()* Axis.x()* (1 - cos(t)) - Axis.y() * sin(t), Axis.z()* Axis.y()* (1 - cos(t)) + Axis.x() * sin(t), cos(t) + pow(Axis.z(), 2) * (1 - cos(t)), Translation.z(),

		0, 0, 0, 1;

	Vector4d Vect4d(Point.x(), Point.y(), Point.z(), 1); //Define the 4d vector for the transformation.

	Vect4d = Transform * Vect4d; 

	return Point3d(Vect4d.x(), Vect4d.y(), Vect4d.z()); //Cast back into a 3d point and return the result.
}

int main()
{
	Ethereal::SayHello(); //Have Ethereal say hi to everyone.

	Point3d p1(5, 0, 0); //Create a point object to manipulate. 
	
	std::cout << "The value of p1 is:\n" << p1 << std::endl; //Print out the point objects coordinates.

	Point3d p2 = TransformTest(p1); //Transform the points with a variety of methods

	std::cout << "The value of p2 is:\n" << p2 << std::endl; 

	Point3d p3 = TransformTest2(p1);

	std::cout << "The value of p3 is:\n" << p3 << std::endl;

	Point3d p4 = TransformTest3(p1);

	std::cout << "The value of p4 is:\n" << p4 << std::endl;

	Point3d p5 = TransformTest4(p1);

	std::cout << "The value of p5 is:\n" << p5 << std::endl;

	return 0;
}