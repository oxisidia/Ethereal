/*This class defines the point objects used to represent presise geometic locations within Ethereal.*/

#include "../Libraries/eigen-3.3.9/Eigen/Dense"

namespace Points
{
	using namespace Eigen;

	/// <summary>
	/// The Ethereal 3d point class.
	/// </summary>
	typedef Vector3d Point3d;

	/// <summary>
	/// The Ethereal 2d point class.
	/// </summary>
	typedef Vector2d Point2d;

	/// <summary>
	/// Calculates the distance between two input points.
	/// </summary>
	/// <param name="P1">First point.</param>
	/// <param name="P2">Second point.</param>
	/// <returns> Returns a double representing the distance between the two points.</returns>
	double Distance(Point3d P1, Point3d P2)
	{
		//Calculate distance with the standard distance formula.

		return sqrt(

			pow(P1.x() - P2.x(), 2) + 

			pow(P1.y() - P2.y(), 2) +

			pow(P1.z() - P2.z(), 2));
	}

	/// <summary>
	/// Calculates the transform of an input point.
	/// </summary>
	/// <param name="Input"> The starting 3d point object.</param>
	/// <param name="Translation"> Vector representing the linear translation of the point from 
	/// it's starting point. Set to (0,0,0) if no translation is needed.</param>
	/// <param name="AxisOfRotation"> The axis which the point is rotated about. </param>
	/// <param name="Angle"> The angle that the point is rotated about the axis.</param>
	/// <returns> The resulting tranformed point. </returns>
	Point3d TranformPoint(Point3d Input, Vector3d Translation, Vector3d AxisOfRotation, double Angle)
	{
		Matrix4d Transform; //Define the translation matrix.

		/*Populate the translation matrix. The first three entries of each of the top three rows are used to compute the rotation about the input axis.
		
		The fourth entry translates the point in xyz. The bottom row allows for even scaling when multipling by the displacement vector.*/

		Transform <<

			/*Row 1*/

			cos(Angle) + pow(AxisOfRotation.x(), 2) * (1 - cos(Angle)), 
			
			AxisOfRotation.x() * AxisOfRotation.y() * (1 - cos(Angle)) - AxisOfRotation.z() * sin(Angle),
			
			AxisOfRotation.x() * AxisOfRotation.z() * (1 - cos(Angle)) + AxisOfRotation.y() * sin(Angle), 
			
			Translation.x(),

			/*Row 2*/

			AxisOfRotation.y() * AxisOfRotation.x() * (1 - cos(Angle)) + AxisOfRotation.z() * sin(Angle),
			
			cos(Angle) + pow(AxisOfRotation.y(), 2) * (1 - cos(Angle)),
			
			AxisOfRotation.y() * AxisOfRotation.z()* (1 - cos(Angle)) - AxisOfRotation.x() * sin(Angle), 
			
			Translation.y(),

			/*Row 3*/

			AxisOfRotation.z() * AxisOfRotation.x() * (1 - cos(Angle)) - AxisOfRotation.y() * sin(Angle), 
			
			AxisOfRotation.z() * AxisOfRotation.y() * (1 - cos(Angle)) + AxisOfRotation.x() * sin(Angle),
			
			cos(Angle) + pow(AxisOfRotation.z(), 2) * (1 - cos(Angle)), 
			
			Translation.z(),

			/*Row 4*/

			0, 0, 0, 1;

		Vector4d Vect4d(Input.x(), Input.y(), Input.z(), 1); //Define the 4d vector for the transformation.

		Vect4d = Transform * Vect4d; //Compute the transform.

		return Point3d(Vect4d.x(), Vect4d.y(), Vect4d.z()); //Cast back into a 3d point and return the result.
	}

	/// <summary>
	/// Calculates the transform of an input point.
	/// </summary>
	/// <param name="Input"> The starting 3d point object.</param>
	/// <param name="Transform"> The 4x4 matrix used to transform the input point. </param>
	/// <returns>The resulting tranformed point. </returns>
	Point3d TransformPoint(Point3d Input, Matrix4d Transform)
	{
		Vector4d Vect4d(Input.x(), Input.y(), Input.z(), 1); //Define the 4d vector for the transformation.

		Vect4d = Transform * Vect4d; //Compute the transform.

		return Point3d(Vect4d.x(), Vect4d.y(), Vect4d.z()); //Cast back into a 3d point and return the result.
	}
};