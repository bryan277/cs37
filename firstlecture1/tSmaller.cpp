#include<iostream>
using namespace std;

template <typename T>

T getSmaller(T val1, T val2)
{
    return (val1 < val2) ? val1 : val2;
}

int main()
{
    int i1 = 5; i2 = 10;

    cout << "Smaller is: " << getSmaller(i1, i2);
    cout << endl;

    float f1 = 2.3, f2 = 1.7;
    cout << "Smaller is: " << getSmaller(f1, f2);
}