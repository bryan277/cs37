// Hans Vos
// CS37
// Homework 3.1
// Due 2/4

#include<iostream>
using namespace std;

int add(int x, int y);
float add(float x, float y);
class AddString { 
  
public: 
    // Classes object of string 
    char s1[25], s2[25]; 
  
    // Parametrized Constructor 
    AddString(char str1[], char str2[]) 
    { 
        // Initialize the string to class object 
        strcpy(this->s1, str1); 
        strcpy(this->s2, str2); 
    } 
  
    // Overload Operator+ to concat the string 
    void operator+() 
    { 
        cout << "\nConcatenation: " << strcat(s1, s2); 
    } 
};

int main()
{

    int num1, num2;
    float float1, float2;
    char string1, string2;
    AddString a1(string1, string2); 


    cout << "Enter 2 integers: " << endl;
    cin >> num1 >> num2;
    cout << add(num1 , num2) << endl;

    cout << "Enter 2 floats: " << endl;
    cin >> float1 >> float2;
    cout << add(float1, float2) << endl;

    cout << "Enter 2 strings: " << endl;
    cin >> string1 >> string2;
    cout << add(string1, string2) << endl;

    +a;
    return 0;
}
//function adding 2 integers
int add(int x, int y)
{
    return x + y;
}
//function adding 2 floats
float add(float x, float y)
{
    return x + y;
}
//function adding two string
// char add(char x , char y)
// {
//     return x + y;
// }

// int main() 
// { 
//     // Declaring two strings 
//     char str1[] = "Geeks"; 
//     char str2[] = "ForGeeks"; 
  
//     // Declaring and initializing the class 
//     // with above two strings 
//     AddString a1(str1, str2); 
  
//     // Call operator function 
//     +a1; 
//     return 0; 
// } 