//use an inline function
#include <iostream>

using namespace std;
//all inline must be prior to main
inline int doubleIt(int num)
{
    return num + num;
}

int main()
{
    int myNum;
    cout << "Enter an integer ";
    cin >> myNum;
    cout << "Doubled: " << doubleIt(myNum) << endl;
}
// Avoiding the cost of a function call is only half the story.

// do:

// use inline instead of #define
// very small functions are good candidates for inline: faster code and smaller executables (more chances to stay in the code cache)
// the function is small and called very often
// don't:

// large functions: leads to larger executables, which significantly impairs performance regardless of the faster execution that results from the calling overhead
// inline functions that are I/O bound
// the function is seldom used
// constructors and destructors: even when empty, the compiler generates code for them
// breaking binary compatibility when developing libraries:
// inline an existing function
// change an inline function or make an inline function non-inline: prior version of the library call the old implementation
// when developing a library, in order to make a class extensible in the future you should:

// add non-inline virtual destructor even if the body is empty
// make all constructors non-inline
// write non-inline implementations of the copy constructor and assignment operator unless the class cannot be copied by value
// Remember that the inline keyword is a hint to the compiler: the compiler may decide not to inline a function and it can decide to inline functions that were not marked inline in the first place. I generally avoid marking function  inline (apart maybe when writing very very small functions).

// About performance, the wise approach is (as always) to profile the application, then eventually inline a set of functions representing a bottleneck.

// References:

// To Inline or Not To Inline
// [9] Inline functions
// Policies/Binary Compatibility Issues With C++
// GotW #33: Inline
// Inline Redux
// Effective C++ - Item 33: Use inlining judiciously