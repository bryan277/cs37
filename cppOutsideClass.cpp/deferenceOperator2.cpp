#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    int* p1;
    p1 = &a;
    int* p2 = p1;

    cout << &a << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << *&a << endl;
    cout << *p1 << endl;

    string y;
    getline(cin, y);
    return 0;
}

// 0x7ffee7f6a9a8
// 0x7ffee7f6a9a8
// 0x7ffee7f6a9a8
// 5
// 5