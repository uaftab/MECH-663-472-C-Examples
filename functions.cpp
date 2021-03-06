/*
Examples for MECH-472/6631 Course Concordia Winter 2015

C Functions

Author - UA @uaftab.com
26-Feb-2015
*/
#include <stdio.h>


// call by value function

//return_type function_name (input_type function_input);
double function_name(double x);

// call by reference function
double f2(double *p);

void f3(double *array);

int main(int argc, char* argv[])
{ 
	double x=1.0;
	
	double array1[5] = {0.1,0.2,0.3,0.4,0.5};

	double *p; // declare a pointer to a double

	p = &x; // & returns the memory location of x
	
	*p = 2.0; // same as x = 2.0;
	// the * operator returns the variable pointed to by
	// a pointer

	printf("\nfun = %lf",function_name(x));
	printf("\nx = %lf\n",x);

	printf("\nf2 = %lf",f2(&x)); // or send p
	printf("\nx = %lf\n",x);

	int i;

	// this example shows that the name of the array is
	// same as a pointer to its first element
	for(i=0;i<5;i++) printf("\na[%d] = %lf",i,array1[i]);

	f3(array1); // no & is required

	printf("\n");

	for(i=0;i<5;i++) printf("\na[%d] = %lf",i,array1[i]);

	printf("\n\ndone.\n");

 	return 0;
}


double function_name(double x)
// a copy of x is made in this function
// call by value makes a temporary copy of the function parameters
{
	x = 1.234; // this won't modify x in the main function

	return x*x; // the copy of x is destroyed
}


double f2(double *p)
// a copy of x is not made in this function
// call by reference does not make a copy so
// you can use the pointer to modify the value x in
// the main function
{
	*p = 1.234; // this will work now

	return (*p)*(*p);
}


void f3(double *array)
// a 1D array is the same as a pointer to the first element
{
	array[0] = 0.0;
	array[1] = 1.0;
	array[2] = 2.2;
}
