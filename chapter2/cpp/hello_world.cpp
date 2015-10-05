
using namespace std;

#include<iostream>
#include<cstdlib>
#include<cmath>

int main(int argc, char* argv[]) {

	double r = atof(argv[1]), s = sin(r);

	cout << "Hello, World! sin(" << r << ") = " << s << endl;

	r = atof(argv[1]), s = cos(r);

	cout << "Hello, World! cos(" << r << ") = " << s << endl;
	return 0;

}
