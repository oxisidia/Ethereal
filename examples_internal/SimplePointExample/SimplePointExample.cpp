// SimplePointExample.cpp
/* Demonstrates the manipulation of Ethereal point objects using various methods and hardware. 
*  Prints the results of each operation in the console following completion.*/

#include "SimplePointExample.h"
#include <Ethereal/Ethereal.h>

int main()
{
	std::string Rez = Ethereal::SayHello();

	std::cout << "Hello world " << Rez << std::endl;

	return 0;
}