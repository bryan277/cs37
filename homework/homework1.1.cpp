// Hans Vos
// CS37
// Homework 1.1
// Due 1/21

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num1;
  int num2;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

  return 0;
}

//Output:
// Enter first number: 12
// Enter second number: 12
// 12 + 12 = 24
// 12 * 12 = 144
// 12 / 12 = 1
