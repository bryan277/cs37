// Hans Vos
// CS37
// Homework 1.2
// Due 1/21

#include<iostream>
#include <iomanip>

int main()
{
   std::string name, address;
   int age;
   float salary;

   std::cout << "Enter your name: ";
   std::getline(std::cin, name);

   std::cout << "Enter your age: ";
   std::cin >> age;

   std::cout << "What is your address: ";
   std::getline(std::cin, address);  //What is your address: Enter your salary:

   std::cout << "Enter your salary: ";
   std::cin >> salary;

   std::cout << std::left << std::setw(20) << name << std::left << std::setw(20) << address << std::right << std::setw(5) << age << std::right << std::setw(10) << printf("%.2f", salary) << std::endl;
}
