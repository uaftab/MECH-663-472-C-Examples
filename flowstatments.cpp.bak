
#include <stdio.h>
#include <conio.h>

int main(int argc, char* argv[])
{ 
	printf("\npress a key to start.\n");
	getch();

	/* 
	
	control statements control the execution (flow) of the program
	depending on some logical conditions.  The main ones are:

	1. if, else - branching
	2. while - loop
	3. for - loop
	4. break - exit a loop 
	
	*/

	int i1=8,i2=0,i3=11;

	// if the logical condition is true then execute the program inside the {}
	if(i1 == 7) {
		printf("\ni1 == 7");
	}

	if(i1 > 7) {
		printf("\ni1 > 7");
	}

	// if i2 is true then execute the first statement in {}, else 
	// execute the second statement in {}
	if(i2) {
		printf("\ni2 is true");
	} 
	else {
		printf("\ni2 is not true");		
	}
	
	// if-else ladder
	if(i3 == 8) {
		printf("\ni3 == 8");
	} else if (i3 == 9) {
		printf("\ni3 == 9");
	} else if (i3 == 10) {
		printf("\ni3 == 10");
	} else {
		printf("\ni3 not equal to 8, 9, or 10");
	}

	// switch - overated by often used

	printf("\npress a key to continue\n");
	getch();

	int i,j;

	// a while loop executes the statment in {} as long as the
	// test condition in () is true
	i = 0;
	while( i<10 && i!=-1 ) {
		printf("\ni = %d",i);		
		i++;
	}

	printf("\npress a key to continue\n");
	getch();
	
	// a for loop initializes an index variable and increments 
	// it each time through the loop.
	// the the statment in {} is executed as long as a
	// test condition is true.
	for( j=2; j<=10 ; j+=2 ) {
		printf("\nj = %d",j);		
	}

	printf("\npress a key to continue\n");
	getch();

	// you can use a break statement to exit a loop before it is complete
	for( j=2; j<=10 ; j+=2 ) {
		printf("\nj = %d",j);
		if(j >= 8) break;
	}

	printf("\npress a key to continue\n");
	getch();

	double a[3][3]; // 2D array (matrix)

	// if, while, for loops, and functions can be placed inside each other
	for(i=0;i<3;i++) {

		printf("\n");

		j = 0;
		while(j<=2) {

			if(i==j) {
				a[i][j] = 1.0;
			} else {
				a[i][j] = 0.0;
			}
			printf("a[%d][%d] = %lf  ",i,j,a[i][j]);

			j++;
		} // end while
	} // end for

	printf("\ndone.\n");
	getch();

	return 0;
}
