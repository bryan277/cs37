// To access a global variable when there is a local varible with same name:
#include<iostream>
using namespace std;

int x = 20;

int main()
{
    int x = 10;
    cout << "Value of global x is " << :: x;
    cout << "\nValue of local x is " << x;
    return 0; 
} 

// Value of global x is 20
// Value of local x is 10

