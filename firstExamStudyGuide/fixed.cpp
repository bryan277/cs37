// modify floatfield
#include <iostream>     // std::cout, std::fixed,

int main () {
  double a = 3.1415926534;
  double b = 2006.0;
  double c = 1.0e-10;

  std::cout.precision(10);

  std::cout << "default:\n";
  std::cout << a << '\n' << b << '\n' << c << '\n';

  std::cout << '\n';

  std::cout << "fixed:\n" << std::fixed;
  std::cout << a << '\n' << b << '\n' << c << '\n';

  std::cout << '\n';

  return 0;
}

// default:
// 3.1416
// 2006
// 1e-010

// fixed:
// 3.14159
// 2006.00000
// 0.00000