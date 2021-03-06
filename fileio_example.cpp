/*
Examples for MECH-472/6631 Course Concordia Winter 2015

File I/O

Author - UA @uaftab.com
26-Feb-2015
*/

//Directives
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


//Main Function
int main(int argc, char* argv[]){ 
	printf("\npress a key to start.\n");
	getchar();

	/* scanf (keyboard input) function exmaples */

	int i1;
	float f1;
	double d1;
	char ch,string[10];

	printf("\ninput i1 > "); 
	scanf("%d",&i1); 
	// notice the & (ampersand) operator in front of i1
	// this is needed so scanf can modify i1

	printf("\ninput f1 d1 > "); 
	scanf("%f %lf",&f1,&d1); 
 
	printf("\ninput string > ");
	scanf("%s",string); 
	// note that & is not required for strings (and 1D arrays)

	printf("\npress any key > ");
	ch = getchar(); // getch works better for char input

	// now print out the variables
	printf("\n\ni1 = %d",i1); 
	printf("\nf1 = %f",f1); 
	printf("\nd1 = %lf",d1); 
	printf("\nch = %c",ch);
	printf("\nstring = %s",string);

	printf("\n\ncontinuous key input");
	printf("\npress x to exit");

	// continuous key input
	while(1) { // make an infinite loop
		if( kbhit() ) { // check if the keyboard has been hit
			ch = getchar(); // if a key is hit then read it
			printf("\nch = %c",ch);
			printf("\ninteger conversion of ch = %d",(int)ch);
		}
		if( ch == 'x' ) break; // if the key is x then exit the loop
		if( (int)ch == 27 ) break; // if the escape key is hit exit the loop
	}

	// see ASCII_chr_set.html in the project zip file for
	// decimal integer values for standard characters

	printf("\npress a key to continue\n");
	getchar();
	
	/* 
		file input/output examples
		fprintf and fscanf are used for file output and input.
		they are almost the same as printf and scanf.
	*/

	// fprintf example	
	
//	char file_name[] = "C:/edit/output.txt"; // put in the directory c:\edit
	char file_name[] = "output.txt"; // put in the same directory as the project

	int i, input;

	FILE *fp; // declare a file pointer variable
	
	fp = fopen(file_name,"w"); // open a file for output (writing)

	// check for errors
	if(fp == NULL) {
		printf("\nerror opening file");
		exit(1); // terminate program
	}

	for(i=1;i<=10;i++) {
		fprintf(fp,"%d\n",i);
	}

	fclose(fp); // close the file
	// you must close the file before opening it again.

	printf("\npress a key to continue\n");
	getchar();

	// fscanf example

	fp = fopen(file_name,"r"); // open a file for input (reading)

	// check for errors
	if(fp == NULL) {
		printf("\nerror opening file"); 
		exit(1);
	}

	for(i=1;i<=10;i++) {
		fscanf(fp,"%d",&input);
		printf("\ninput = %d",input);
	}

	fclose(fp); // close the file
	// you must close the file before opening it again.

	printf("\ndone.\n");
	getchar();
	
	return 0;
}

