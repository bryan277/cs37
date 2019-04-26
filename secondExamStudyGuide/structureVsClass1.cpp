//program 2
#include <stdio.h>

struct Test {
    int x;
};

int main()
{
    Test t;
    t.x = 20;
    getchar();
    cout << t.x;
    return 0;
}