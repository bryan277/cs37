//3 types of access specifiers
// public - The members declared as Public are accessible from outside the Class through an object of the class
// protected - The members declared as Protected are accessible from outside the class BUT only in a class derived from it
// private - These members are only accessible from within the class. No outside Access is allowed.
#include <iostream>
using namespace std;

class MyClass {
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

int main()
{
    MyClass obj;
    obj.a = 10; //Allowed
    obj.b = 20; //Not Allowed, gives compiler error
    obj.c = 30; //Not Allowed, gives compiler error
}