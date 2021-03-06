/*
Examples for MECH-472/6631 Course Concordia Winter 2015

Variables
Arrays
Data Types

Author - UA @uaftab.com
26-Feb-2015
*/
#include <stdio.h>
#include <conio.h>



double global1 = 100.0; // define a global variable

// access a global variable defined in another file
extern double globalx;

int main(int argc, char* argv[])
{ 
	int integer1,i,j,k;  // declare an integer

	float float1 = 3.14; // declare a real number (32-bit = 8 signifigant)
	
	// (type) - cast
	float float2=(float)1.0,float3=(float)1.618;

	double double1 = 1.234567890134; // double real (64-bit = 16 figures)

	char character1='B';
	double darray1[10]; // double array (vector) with 10 doible components

	double d2Darray[3][3]; // name[nrows][ncolumns] , good for matrices

	// accessing 1D arrays
	darray1[0] = 1.1;
	darray1[9] = 1.9;

	d2Darray[0][0] = 1.1;
	d2Darray[2][2] = 3.3;

	// for loop allows iterative loops i = 0 to 9
	for(i=0;i<=9;i++) {
		darray1[i] = i;
		printf("%d , %lf\n",i,darray1[i]);
	}
	
	for(i=0;i<=2;i++) {
			for(j=0;j<=2;j++) {
				d2Darray[i][j] = i+j;
				printf("%d , %d , %lf\n",i,j,d2Darray[i][j]);
			}
	}
	

	integer1 = 888*2; 
	// %lf - formating character
	printf("integer1 = %d , float1 = %f, double1 = %lf, char1 = %c\n",
		integer1,float1,double1,character1);
	printf("Global variable: %f",global1);
	printf("darray1 = %lf, darray9 = %lf\n",darray1[0],darray1[9]);

	// Lets see some strings.
	printf("Lets take a look at some strings!\n");
	getchar();
	
	char string1[10]="orange", string2[]="juice", string3[3];

	// all strings must have a NULL character (\0) at the end
	string3[0] = 'O'; string3[1] = 'J'; string3[2] = '\0'; 

	printf("\n%s %s %s",string1,string2,string3);

	printf("\npress a key to continue\n");
	getch();
	
	
	return 0; // return (end) from the main function

}

