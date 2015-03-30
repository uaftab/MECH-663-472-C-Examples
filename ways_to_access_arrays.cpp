// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <iostream>

using namespace std;

void print_array_pointer(int* array_name){
	
	for (int inc=0; inc<8; inc++){
		cout<<"Count Value: "<<inc<<" myarray value: "<< *(array_name+inc) <<"\n";
	}
}

void print_array_reference(int& array_name){
	
	for (int inc=0; inc<8; inc++){
		cout<<"Count Value: "<<inc<<" myarray value: "<< (array_name+inc) <<"\n";
	}
}

void main()
{
	
	int myarray[8] = {0};
	
	//populate array

	for (int inc=0; inc<8; inc++){
		myarray[inc] = inc ; 
	}



	//read values from array using direct addressing

	cout<<"\n----- Acessing Directly-> myarray[index_value] ------"<<"\n"<<"\n";

	for (int inc=0; inc<8; inc++){
		cout<<"Count Value: "<<inc<<" myarray value: "<< myarray[inc] <<"\n";
	}

	//read values from array accessing it as a pointer

	cout<<"\n----- Acessing as a pointer-> *(myarray+index_value) ------"<<"\n"<<"\n";

	for (int inc=0; inc<8; inc++){
		cout<<"Count Value: "<<inc<<" myarray value: "<< *(myarray+inc) <<"\n";
	}


	cout<<"\n";
	print_array_pointer(myarray);
	cout<<"\n";
	print_array_reference(*myarray);


	cout << "Hello";
	getchar();



}