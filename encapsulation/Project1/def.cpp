#include "func.h"
#include <iostream>
#include <sstream>

using namespace std;

void test::DoStuff() {

	std::cout << "Bonjour";

}

std::string Point::ToString(void) {

	std::stringstream sstring;

	sstring << "Point " << "x: " << x << "; y: " << y << "; z: " << z << '.';

	string returned = sstring.str();

	std::cout << returned << endl;

	return returned;
}