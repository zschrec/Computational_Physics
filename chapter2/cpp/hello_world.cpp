
using namespace std;

#include<iostream>
#include<cstdlib>
#include<cmath>

int main(int argc, char* argv[]) {

	double r = atof(argv[1]), s = sin(r);
	int a = 0, b = 9, c= 10;

	cout << "Hello, World! sin(" << r << ") = " << s << endl;

	r = atof(argv[1]), s = cos(r);

	cout << "Hello, World! cos(" << r << ") = " << s << endl;
	
	cout << "*******" << ((a+b)>>1) << " " << ((a+c) >> 1) << endl;

	return 0;

}
