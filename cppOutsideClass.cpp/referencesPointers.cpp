//References
//int x = 5
//int - data type
//x - Identifier
//= 5; - Data value

//Memory Address:
    // -where variable stored in memory
    // -Random hexidecimal value
    // -Each address is unique but sequencial

// "Address of" operator 

//& is the Address of operator
    // - used to get an address from variables
    // - also can create a reference variable

// - a variable that has the exact same memory address AND data!
// - IS NOT a copy
// - place & between data type and variable 
// - int a = 5;
// - int& my_ref = a;
// - cout << a << end;
// - cout << my_ref << endl;
// - cout << &a << endl;
// - cout << &my_ref << endl;

//References
// -cannot be null
// -cannot be changed
// -must be initialized
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    // cout << a << endl;
    // cout << &a << endl;

    // string b = "Ham Sandwich";
    // cout << b << endl;
    // cout << &b << endl;

    string y;
    getline(cin, y);
    return 0;
}
// output
//     5
// 0x7ffeeec7a9d8 - address of variable
// Ham Sandwich
// 0x7ffee7c5e958 - address