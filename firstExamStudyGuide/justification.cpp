#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

int main()
{
    int x = 12345;

    cout << "Default is right justified: " << endl << setw( 10 ) << x;

    cout << "\n\nUse std::left to left justify x:\n" << left << setw(10) << x;

    cout << "\n\nUse std::right to right justify x:\n"<< right << setw(10) << x << endl;
    return 0;

}

// Default is right justified: 
//      12345

// Use std::left to left justify x:
// 12345     

// Use std::right to right justify x:
//      12345