// SimplePointExample.cpp
/* Demonstrates the manipulation of Ethereal point objects using various methods and hardware. 
*  Prints the results of each operation in the console following completion.*/

#include "SimplePointExample.h"
#include <Ethereal/Ethereal.h>

#include "../../Libraries/eigen-3.3.9/Eigen/Dense"

using Eigen::MatrixXd;

int main()
{
	std::string Rez = Ethereal::SayHello();

	std::cout << "Hello world " << Rez << std::endl;

	//

	MatrixXd m(2, 2);

	m(0, 0) = 3;

	m(1, 0) = 2.5;

	m(0, 1) = -1;

	m(1, 1) = m(1, 0) + m(0, 1);

	std::cout << m << std::endl;

	return 0;
}