// different ways of passing agruments
#include <iostream>
using namespace std;

int sum (int n1, int n2);
void increase(int *p1, int *p2);
void decrease(int &r1, int &r2);

int main()
{
  int mn1 = 3;
  int mn2 = 7;

  cout << mn1 << " + " << mn2 << " = " << sum(mn1, mn2) << endl;

  increase(&mn1, &mn2);

  cout <<  "mn1 = " << mn1 << ", mn2 = " << mn2 << endl;

  decrease(mn1, mn2);

  cout << "mn1 = " << mn1 << ", mn2 = " << mn2 << endl;
}

int sum(int n1, int n2)
{
  return n1 + n2;
}

void increase(int *p1, int *p2)
{
  *p1 = (*p1 + 1);
  *p2 = (*p2 + 1);
}

void decrease(int &r1, int &r2)
{
  r1--;
  r2--;
}

// 3 + 7 = 10
// mn1 = 4, mn2 = 8
// mn1 = 3, mn2 = 7
