//Example will loop until a key is pressed
//Example will not work with all compilers
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
