#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    int& my_ref = a; //always put ref symbol left next to data type
    cout << a << endl;
    cout << my_ref << endl;
    cout << &a << endl;
    cout << &my_ref << endl;
    string y;
    getline(cin, y);
    return 0;
}
// int& my_ref = a;
// 5
// 5
// 0x7ffee4c319b8
// 0x7ffee4c319b8

// int my_ref = a;
// 5
// 5
// 0x7ffee5e659b8
// 0x7ffee5e659b4