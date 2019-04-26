// *(star) known as the deference operator
// -think of a "get a value at..."
// -also used to create pointers
// int a = 5;
// cout << *&*&a << endl; 

//pointers
// -variables with it's own block of memory
// -holds only an address to another block of memeory
// -it 'hooks' into other 'hoops'
// int a = 5;
// int* p1 = &a;
// int* p2 = &a;
// cout << &a << endl;
// cout << p1 << endl;
// cout << p2 << endl;
// cout << *&a << endl;
// cout << *p1 << endl;
// address can have muliple pointers connecting to it or none at all connecting to it or none at all
// pointer can point to one or no address
// can be null, switched and don not need to be initialized

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    cout << *&a << endl;

    string y;
    getline(cin, y);
    return 0;
}

//5