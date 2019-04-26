// Hans Vos
// CS37
// Homework 3.2
// Due 2/6

#include <iostream>
using namespace std;

template <typename T>

T add (T x, T y)
{
    T result;
    result = x + y;
    return (result);
}

int main()
{
    int num1 = 5, num2 = 5, k;
    float float1 = 5.5, float2 = 5.5, n;
    // char string1 = "Hello", string2 = "world", y;
    k = add<int>(num1, num2);
    n = add<float>(float1, float2);
    // y = add<char>(string1, string2);
    cout << k << endl;
    cout << n << endl;
    // cout << y << endl;
    return 0;

}