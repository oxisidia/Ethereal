/*This class defines the point objects used to represent geometic locations within Ethereal.
* Points can represent the geometric location of a topological vertex. */

#include "../Libraries/eigen-3.3.9/Eigen/Dense"

namespace Points
{
	using namespace Eigen;

	//using Eigen::Vector3d;

	//using Eigen::Vector2d;

	/// <summary>
	/// The Ethereal 3d point class.
	/// </summary>
	typedef Vector3d Point3d;

	/// <summary>
	/// The Ethereal 2d point class. Ethereal is a 3D application so use this class sparingly within the kernel. 
	/// </summary>
	typedef Vector2d Point2d;
};