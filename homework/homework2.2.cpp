// Hans Vos
// CS37
// Homework 2.2
// Due 1/28

#include<iostream>
using namespace std;

void reduceHalf(float &num);
void volume(float height, float length, float depth);

int main()
{
    float height, length, depth;

    cout << "Enter height, length, and depth of a cube: ";
    cin >> height >> length >> depth;

    cout << "Height: " << reduceHalf(height) << "Length: " << reduceHalf(length) << "Depth: " << reduceHalf(depth)  << "Volume: " << volume(height, length, depth);

    return 0;
}

void reduceHalf(float &num)
{
    num/=(float)2;
    return num;
}

void volume(float height, float length, float depth)
{
    float volume = (height + length + depth) * float(3);
    return volume;
}


