
using namespace std;
#include <iostream>
#include <cstdio>

void pointers();
void arrays();

int main() {

	pointers();
	arrays();

}

void pointers() {
	int var;
	int *pointer;

	pointer = &var;
	var = 421;
	printf("Address of the integer variable var : %p\n",&var);
	printf("Value of var : %d\n", var);
	printf("Value of the integer pointer variable: %p\n",pointer);
	printf("Value which pointer is pointing at : %d\n",*pointer);
	printf("Address of the pointer variable : %p\n",&pointer);
}

void arrays() {
	int matr[2];
	int *pointer;
	pointer = &matr[0];
	matr[0] = 321;
	matr[1] = 322;
	printf("\nAddress of the matrix element matr[1]: %p",&matr[0]);
	printf("\nValue of the matrix element matr[1]; %d",matr[0]);
	printf("\nAddress of the matrix element matr[2]: %p",&matr[1]);
	printf("\nValue of the matrix element matr[2]: %d\n", matr[1]);
	printf("\nValue of the pointer : %p",pointer);
	printf("\nValue which pointer points at : %d",*pointer);
	printf("\nValue which (pointer+1) points at: %d\n",*(pointer+1));
	printf("\nAddress of the pointer variable: %p\n",&pointer);
}
