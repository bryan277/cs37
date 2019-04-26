//Illustrate overloaded functions
#include <iostream>
using namespace std;

int doubleIt(int x)
{
    return x + x;
}

double doubleIt(double x)
{
    return x + x;
}

int doubleIt(int x, int y)
{
    return x + x + y + y;
}

double doubleIt(double x, double y)
{
    return x + x + y + y;
}

int main()
{
    cout << doubleIt(5) << endl;
    cout << doubleIt(2.5) << endl;
    cout << doubleIt(7.2, 13.9) << endl;
    cout << doubleIt(10, 20) << endl;
}

// 10
// 5
// 42.2
// 60