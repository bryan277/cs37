// Inheritance and Access Specifiers

// Inheritance in C++ can be one of the following types:
// Private Inheritance
// Public Inheritance
// Protected inheritance

// Here are the member access rules with respect to each of these:

// First and most important rule Private members of a class are never accessible from anywhere except the members of the same class.

// Public Inheritance:
// All Public members of the Base Class become Public Members of the derived class &
// All Protected members of the Base Class become Protected Members of the Derived Class.

// i.e. No change in the Access of the members. The access rules we discussed before are further then applied to these members.

// Code Example:
#include <iostream>
 
using namespace std;

 class Base {
     public: 
        int a;
    protected:
        int b;
    private:
        int c;
};

class Derived: public Base {
    void doSomething()
    {
        a = 10; // Allowed
        b = 20; // Allowed
        c = 30; // Not Allowed, Compiler Error

    }
};

int main()
{
    Derived obj;
    obj.a = 10; //Allowed
    obj.b = 20; //Not Allowed, Compiler Error
    obj.c = 30; //Not Allowed, Compiler Error
}
