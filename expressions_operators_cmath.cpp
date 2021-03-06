/*

Examples for MECH-472/6631 Course Concordia Winter 2015

Expressions 
Operators
CMath Functions


Author - UA @uaftab.com
26-Feb-2015
*/
#include <stdio.h>
#include <conio.h>

// include this file for mathematical functions like sin, cos, tan, arcsin, arctan, arccos, fabs
//Full List is available here: http://www.cplusplus.com/reference/cmath/
#include <math.h>

int main(int argc, char* argv[])
{ 
	printf("\npress a key to start.\n");
	getchar();

	/* assignment operator ( = ) examples */
	
	double x1,x2,x3,x4;

	x1 = 1.0; // assigment to a constant
	
	x1 = x2 = 2.0; // multiple assignment

	x3 = x4 = x1*x2; // assignment to an evaluated expression

	printf("\nx1 = %lf, x2 = %lf, x3 = %lf, x4 = %lf",x1,x2,x3,x4);

	printf("\npress a key to continue\n");
	getchar();

	/* arithmetic operator examples */

	double r1=1.0, r2=0.1;

	printf("\nr1 = %lf, r2 = %lf",r1,r2);
	printf("\nr1 + r2 = %lf",r1+r2); // addition
	printf("\nr1 - r2 = %lf",r1-r2); // subraction
	printf("\nr1 * r2 = %lf",r1*r2); // multiplication
	printf("\nr1 / r2 = %lf\n",r1/r2); // division

	int i1=7, i2=3;

	printf("\ni1 = %d, i2 = %d",i1,i2);
	printf("\ni1 / i2 = %d",i1/i2); // division
	printf("\ni1 %% i2 = %d\n",i1%i2); // remainder from integer division

	//Post and Pre Incremenent/Decrement
	printf("\nr1 = %lf",r1);
	printf("\nr2 = %lf",r2);
	//r1++; // increment (same as r1 = r1 + 1)
	//r2--; // decrement (same as r2 = r2 - 1)
	
	printf("\nr1++ = %lf",r1++);
	printf("\nr2-- = %lf",r2--);
	
	printf("\nr1 = %lf",r1);
	printf("\nr2 = %lf",r2);
	    
	//++r1; // increment (same as r1 = r1 + 1)
	//--r2; // decrement (same as r2 = r2 - 1)
	
	printf("\nr1 = %lf",r1);
	printf("\nr2 = %lf",r2);
	printf("\n++r1 = %lf",++r1);
	printf("\n--r2 = %lf",--r2);
	printf("\nr1 = %lf",r1);
	printf("\nr2 = %lf",r2);
	
	
	r1+=5; // increment by 5 (same as r1 = r1 + 5)
	r2-=5; // decrement by 5 (same as r2 = r2 - 5)
	printf("\nr1+=5 = %lf",r1);
	printf("\nr2-=5 = %lf",r2);

	r1*=10; // multiply by 10 (same as r1 = r1 * 10)
	r2/=10; //   divide by 10 (same as r2 = r2 / 10)
	printf("\nr1*=10 = %lf",r1);
	printf("\nr2/=10 = %lf",r2);

	printf("\npress a key to continue\n");
	getchar();

	/* comparision operator examples */

	// in C logical expressions evaluate to an integer value
	// with 0 defined as false and non-zero as true

	i1 = 7; // true
	i2 = 0; // false
	printf("\ni1 = %d (true), i2 = %d (false)",i1,i2);

	printf("\n(i1 == 7) = %d",i1 == 7); // equality
	printf("\n(i1 != 7) = %d",i1 != 7); // inequality
	printf("\n(i1 == i2) = %d",i1 == i2);
	printf("\n(i1 != i2) = %d\n",i1 != i2);

	// equality and inequality tests may not be consistent for float and double types !

	printf("\nr1 = %lf, r2 = %lf",r1,r2);
	printf("\n(r1 > r2) = %d",r1 > r2); // greater than
	printf("\n(r1 < r2) = %d",r1 < r2); // less than
	printf("\n(i1 >= 7) = %d",i1 >= 7);   // greater than or equal to
	printf("\n(i1 <= 7) = %d",i1 <= 7);   // less than or equal to

	// >= and <= may not be consistent for double and float types !

	printf("\npress a key to continue\n");
	getchar();

	/* logical operator examples */
	
	int true1 = 7;
	int false1 = 0;

	printf("\n\n&& is defined as the AND operator");

	printf("\nfalse1 && false1 = %d",false1 && false1);
	printf("\nfalse1 && true1 = %d",false1 && true1);
	printf("\ntrue1 && false1 = %d",true1 && false1);
	printf("\ntrue1 && true1 = %d",true1 && true1);
	
	printf("\n\n|| is defined as the OR operator");

	printf("\nfalse1 || false1 = %d",false1 || false1);
	printf("\nfalse1 || true1 = %d",false1 || true1);
	printf("\ntrue1 || false1 = %d",true1 || false1);
	printf("\ntrue1 || true1 = %d",true1 || true1);

	printf("\n\n! is defined as the NOT operator");
	printf("\n!false1 = %d",!false1);
	printf("\n!true1 = %d",!true1);

	printf("\npress a key to continue\n");
	getchar();

	/* type conversion examples */
	
	int i=3;
	double r=2.2;
	float f=3.3;
	char ch = 'z';

	/* float and double are rounded down when converted to integers
       make sure it isn't too large (or -) to convert.
	   the maximum for an integer is 2^(8*sizeof(int)-1)
	   where sizeof(int) is the number of bytes for an int variable
	   characters are treated as int
	   when real and integers meet the result will be a double */
	i = i*r + 1 + ch; // example
	f = i;
	ch = r;

	/* implicit conversions will be correct, but a warning will be produced
	   indicating a possible loss of data if the conversion was not correctly
	   accounted for */

	printf("\ni = %d, r = %lf, f = %f, ch = %c",i,r,f,ch);

	/* values passed as function arguments must have the correct type
	   in this case use a cast statement to perform an explicit conversion
	   to the correct data type */

	// cast statement is needed here since the sin function expects a double argument
	printf("\nsin( (double)i ) = %lf",sin((double)i));

	printf("\npress a key to continue\n");
	getchar();

	/* common math functions */

	double x = -0.1, y = 2.0;
	printf("\nx = %lf, sin(x) = %lf, asin(x) = %lf, fabs(x) = %lf",x,sin(x),asin(x),fabs(x));
	printf("\ny = %lf, sinh(y) = %lf, sqrt(0.5) = %lf, y^2.5 = %lf",y,sinh(y),sqrt(y),pow(y,2.5));
	printf("\nlog(y) = %lf, log10(y) = %lf)",log(y),log10(y));


	printf("\ndone.\n");
	getchar();

	return 0;
}
