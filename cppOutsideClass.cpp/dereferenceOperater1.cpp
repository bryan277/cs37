#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    int* p1;
    p1 = &a;
    int* p2 = &a;

    cout << &a << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << *&a << endl;
    cout << *p1 << endl;

    string y;
    getline(cin, y);
    return 0;
}

// 0x7ffeedad89a8
// 0x7ffeedad89a8
// 0x7ffeedad89a8
// 5
// 5