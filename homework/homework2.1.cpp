// Hans Vos
// CS37
// Homework 2.1
// Due 1/28

#include<iostream>
using namespace std;

void double1(int *a);
int area(int a, int b);

int main()
{
  int height;
  int length;

  cout << "Enter height: ";
  cin >> height;

  cout << "Enter length: ";
  cin >> length;

  cout << "Height: " << double1(&height) << "Length: "<< double1(&length) <<  "Area: " << area(height, length);
}

void double1(int*a)
{
  int t = *a * 2; 
  return t;
}

int area(int a, int b)
{
  int z = a * b;
  return z;
}
