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
	/// The Ethereal 2d point class. Ethereal is a 3D application so use this class sparingly within the kernel. 
	/// </summary>
	typedef Vector2d Point2d;

	/// <summary>
	/// Returns the distance between the two input points.
	/// </summary>
	/// <param name="P1">First point.</param>
	/// <param name="P2">Second point.</param>
	/// <returns></returns>
	double Distance(Point3d P1, Point3d P2)
	{
		return sqrt(

			pow(P1.x() - P2.x(), 2) +

			pow(P1.y() - P2.y(), 2) +

			pow(P1.z() - P2.z(), 2));
	}
};