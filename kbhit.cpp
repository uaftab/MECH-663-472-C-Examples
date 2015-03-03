/*
Examples for MECH-472/6631 Course Concordia Winter 2015

kbhit() Example
* Example will loop until a key is pressed
* Example will not work with all compilers


Author - UA @uaftab.com
26-Feb-2015
*/




#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        if(kbhit())
        {
            break;
        }
    }
}
