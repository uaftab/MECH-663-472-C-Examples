/*
Examples for MECH-472/6631 Course Concordia Winter 2015

Pointers Examples

Author - UA @uaftab.com
26-Feb-2015
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
#include <malloc.h>

int main(int argc, char* argv[])
{ 

	int x, *p = (int *)3000; // video ?
	char a[] = "hellothere",*pa = a;

	char *pd=NULL;

	pd = (char *)malloc(100*sizeof(char));	
	if(pd == NULL) {
		printf("\nmalloc error"); 
	}

	pd[0] = 'M';
	pd[1] = 'J';
	pd[2] = '\0'; // null character, terminate a string

	printf("\npd = %s",pd);

	if(pd == NULL) {
		printf("\nnull pointer in free");
	}	
	free(pd);

//	printf("\n%c , %c ,%c",a[0],*(pa++),*pa);

	x = 5;
//	p = &x; // smart thing to do (relatively)

//	p = (int *)x; // don't do this

//	cout << "\np = " << (int)p;

//	printf("\np = %d",p);

	printf("\npress a key to start.\n");
	getchar();

	printf("\npress a key to continue\n");
	getchar();

	printf("\ndone.\n");
	getchar();
	
	return 0;
}
