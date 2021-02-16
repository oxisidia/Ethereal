namespace Vectors
{
	/// <summary>
	/// Generic three dimensional vector.
	/// </summary>
	public class Vect3
	{
	public:

		double

			X,///<summary> The X component of the vector. </summary>

			Y,///<summary> The Y component of the vector. </summary>

			Z;///<summary> The Z component fo teh vector. </summary>

		/// <summary>
		/// Constructs a vector with the input component values.
		/// </summary>
		/// <param name="X"></param>
		/// <param name="Y"></param>
		/// <param name="Z"></param>
		Vect3(double X, double Y, double Z)
		{
			this->X = X; 

			this->Y = Y;

			this->Z = Z;
		}

		/// <summary>
		/// Constructs a vector with all components set to the input value.
		/// </summary>
		/// <param name="Component"></param>
		Vect3(double Component)
		{
			this->X = this->Y = this->Z = Component; 
		}

		double Length() ///<summary> Returns the length of the vector. </summary>
	};
}