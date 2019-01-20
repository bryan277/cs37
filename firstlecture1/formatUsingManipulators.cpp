//Format using Manipulators
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  char phrase[11] = "Hello Fred";
  float num = 23.45;

  cout << "Right justified:" << endl;
  cout << setw(15) << phrase << endl;
  cout << setw(10) << num << endl;
  cout << endl;
  cout << "left justified: " << endl;
  cout << setw(15) << left << phrase << endl;
  cout << setw(10) << num << endl;
  cout << endl;
  cout << "Justification rest to right: " << endl;
  cout << setw(15) << right << phrase << setw(10) << num << endl;
}


// Right justified:
//      Hello Fred
//      23.45
//
// left justified:
// Hello Fred
// 23.45
//
// Justification rest to right:
//      Hello Fred     23.45
