//Illustrate use of default arguments
#include <iostream>
using namespace std;

int perimeter(int side1 = 1, int side2 = 1, int side3 = 1, int side4 = 1);

int main() 
{
    int mside1 = 5, mside2 = 10, mside3 = 7;
    cout << "Perimeter-defualt: " << perimeter() << endl; //4
    cout << "Perimeter- 1 side: " << perimeter(mside1) << endl; //8
    cout << "Perimeter- 2 sides: " << perimeter(mside1, mside2) << endl; //17
    cout << "Perimeter- 3 sides: " << perimeter(mside1, mside2, mside3) << endl; //23
}

//Calculate perimater
int perimeter(int side1, int side2, int side3, int side4)
{
    return side1 + side2 + side3 + side4;
}