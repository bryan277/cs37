// 3 ways of passing arguments to a function
#include<iostream>
using namespace std;

// prototypes
void swapbyPtr(int *pn1, int *pn2);
void swapbyRef(int &rn1, int &rn2);
void swapbyValue(int vn1, int vn2);

int main()
{
  int n1, n2, keep1, keep2;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  keep1 = n1;
  keep2 = n2;

  cout << endl << endl << "Before swap by VALUE:" << endl;
  cout << "Variable\t\tValue\t\tMemory Address" << endl;
  cout << "n1\t\t\t" << n1 << "\t\t" << &n1 << endl;
  cout << "n2\t\t\t" << n2 << "\t\t" << &n2 << endl;
  swapbyValue(n1, n2);
  cout << "After swap by VALUE:" << endl;
  cout << "n1\t\t\t" << n1 << "\t\t" << &n1 << endl;
  cout << "n2\t\t\t" << n2 << "\t\t" << &n2 << endl;

  // Enter missing code here -- provided on the handout.
  cout<<endl<<endl<<"Before swap by PTR/ADDRESS:"<<endl;
  cout<<"Variable\t\tValue\t\tMemory Address"<<endl;
  cout << "n1\t\t\t" << n1 << "\t\t" << &n1 << endl;
  cout << "n2\t\t\t" << n2 << "\t\t" << &n2 << endl;
  swapbyPtr(&n1, &n2);
  cout << "n1\t\t\t" << n1 << "\t\t" << &n1 << endl;
  cout << "n2\t\t\t" << n2 << "\t\t" << &n2 << endl;

  n1 = keep1;
  n2 = keep2;
  cout<<endl<<endl<<"Before swap by REFERENCE:"<<endl;
  cout<<"Variable\t\tValue\t\tMemory Address"<<endl;
  cout << "n1\t\t\t" << n1 << "\t\t" << &n1 << endl;
  cout << "n2\t\t\t" << n2 << "\t\t" << &n2 << endl;
  swapbyRef(n1,n2);
  cout<<"After swap by REFERENCE:"<<endl;
  cout << "n1\t\t\t" << n1 << "\t\t" << &n1 << endl;
  cout << "n2\t\t\t" << n2 << "\t\t" << &n2 << endl;
}

// Swap values of arguments passed by pointer/address.
void swapbyPtr(int *pn1, int *pn2)
{
  cout << "In swap by PTR/ADDRESS:" << endl;
  cout << "pn1\t\t\t" << *pn1 << "\t\t" << &pn1 << endl;
  cout << "pn2\t\t\t" << *pn2 << "\t\t" << &pn2 << endl;
  // Enter missing code here -- you provide this code yourself.
  int t = *pn1;
  *pn1 = *pn2;
  *pn2 = t;
}

// Swap values of arguments passed by reference.
void swapbyRef(int &rn1, int &rn2)
{
  cout << "In swap by REFERENCE:" << endl;
  cout << "rn1\t\t\t" << rn1 << "\t\t" << &rn1 << endl;
  cout << "rn2\t\t\t" << rn2 << "\t\t" << &rn2 << endl;

  // Enter missing code here -- you provide this code yourself.
  int t = rn1;
  rn1 = rn2;
  rn2 = t;
}

// Swap values of arguments passed by value (no swapping takes place, why?).
void swapbyValue(int vn1, int vn2)
{
  cout << "In swap by VALUE:" << endl;
  cout << "vn1\t\t\t" << vn1 << "\t\t" << &vn1 << endl;
  cout << "vn2\t\t\t" << vn2 << "\t\t" << &vn2 << endl;

  int t = vn1;
  vn1 = vn2;
  vn2 = t;
}