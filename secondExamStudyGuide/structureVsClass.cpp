//Program 1
#include <stdio.h>

class Test {
    int x; // x is private
};

int main()
{
    Test t;
    t.x = 20;
    getchar();
    return 0;
}

// error: 'x' is a private member of 'Test'