// Hans Vos
// CS37
// Homework 1.2
// Due 1/21

#include<iostream>
#include <iomanip>
using namespace std;

#define MAX_NAME_LENGTH     50
#define MAX_ADDRESS_LENGTH  100

int main()
{
   char name[MAX_NAME_LENGTH],address[MAX_ADDRESS_LENGTH];
   int age;
   float salary;

   cout << "Enter your name: ";
   cin.getline(name,MAX_NAME_LENGTH);

   cout << "Enter your age: ";
   cin >> age;
   cin.ignore();

   cout << "Enter address: ";
   cin.getline(address,MAX_ADDRESS_LENGTH);

   std::cout << "Enter your salary: ";
   std::cin >> salary;

   std::cout << std::left << std::setw(20) << name << std::left << std::setw(20) << address << std::right << std::setw(5) << age << std::right << std::setw(10) << printf("%.2f", salary) << std::endl;

   return 0;
}
