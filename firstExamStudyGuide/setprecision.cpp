#include <iostream>
#include <iomanip>
// #include <cmath>
// #include <limits>
int main()
{
    double pi = 4.123123123123;
    std::cout << "default precision (6): " << pi << '\n'
              << "std::setprecision(10): " << std::setprecision(10) << pi << '\n';
}

// default precision (6): 3.14159
// std::setprecision(10): 3.141592654
// max precision:         3.141592653589793239