// What is destructor?
// Destructor is a member function which destructs or deletes an object

// When is destructor called?
// A destructor function is called automatically when the object goes out of scope:
// - the function ends
// - the program ends
// - a block containing local variables ends
// - a delete operator is called

#include<iostream>
using namespace std;

class String {
    private:
        char *s;
        int size;
    public:
        String(char *); // constructor
        ~String();      // destructor
};

String::String(char *c) {
    size = strlen(c);
    s = new char[size+ 1];
    strcpy(s,c);
}

  
String::~String() 
{ 
    delete []s; 
}