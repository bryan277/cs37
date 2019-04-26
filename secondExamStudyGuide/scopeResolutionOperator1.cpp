//To define a function outside a class
#include<iostream>
using namespace std;

class B
{
    public:

    // Only declaration
    void fun();
    void funnyJoke();
};

void B::fun()
{
    cout << "fun() called\n";
}

void B::funnyJoke()
{
    cout << "Your mom is just fat\n";
}

int main()
{
    B mommy;
    mommy.fun();
    mommy.funnyJoke();
    return 0;
}

// fun() called
// Your mom is just fat

    