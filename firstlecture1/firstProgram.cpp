//Display Hello World on the screen
/*
comments
*/
//never have two or more lines

#include<iostream>//preproccessor director

int main()//functions, every program must have at least one Main function, inside parenthesis are parameters
{
  std::cout << "Hello World!\n";//std - name of the namespace, :: - scope resultion operator, cout - stream object, << - stream insertion operator
  std::cout << "Hello," << "my name is " << "Fred" << std::endl;
  std::cout << "Hi";
  return 0;//return should always match int or whatever element before main()
}

//three things you can do with functions
//-declare
//-define
//-call

//variable outside braces are globel and inside and codeblocks(local)
