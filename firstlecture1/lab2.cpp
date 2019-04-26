#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

float average(float n1, float n2, float n3);

int main()
{
  std::string name;
  float grade1, grade2, grade3, avg;

  cout << "Enter name full name: ";
  getline(cin, name);

  cout << "Please enter 3 grades: ";
  cin >> grade1 >> grade2 >> grade3;
/*
  cout << "Please enter second grade: ";
  cin >> grade2;

  cout << "Please enter third grade: ";
  cin >> grade3;*/

//avg = average(grade1, grade2, grade3);
  cout << name << setprecision(2) << fixed << ": " << average(grade1, grade2, grade3);
}

float average(float n1, float n2, float n3)
{
  float avg = (n1 + n2 + n3) / (float)3;
  return avg;
}
