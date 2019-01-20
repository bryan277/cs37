//Input 2 ages and compare them
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int yAge;//variables
  int fAge;

  cout << "Enter your age: ";
  cin >> yAge;

  cout << "Enter your friend's age: ";
  cin >> fAge;

  cout << "Ages are: " << yAge << "\t"//tab
       << fAge << endl;

  if (yAge > fAge)//true or false, use brackets when more than one line to output
    cout << "Your are older\n";
  else
  if (fAge > yAge)
    cout << "Your friend is older.\n";
  else
    cout << "You are the same age.\n";

}
