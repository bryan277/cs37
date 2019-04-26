// Hans Vos
// CS37
// Homework 3.1
// Due 2/4

#include<iostream>
using namespace std;

int add(int x, int y);
float add(float x, float y);
char add(char x , char y);

int main()
{
    int num1, num2;
    float float1, float2;
    char string1, string2;

    cout << "Enter 2 integers: " << endl;
    cin >> num1 >> num2;
    cout << add(num1 , num2) << endl;

    cout << "Enter 2 floats: " << endl;
    cin >> float1 >> float2;
    cout << add(float1, float2) << endl;

    cout << "Enter 2 strings: " << endl;
    cin >> string1 >> string2;
    cout << add(string1, string2) << endl;
}
//function adding 2 integers
int add(int x, int y)
{
    return x + y;
}
//function adding 2 floats
float add(float x, float y)
{
    return x + y;
}
//function adding two string
char add(char x , char y)
{
    return x + y;
}

