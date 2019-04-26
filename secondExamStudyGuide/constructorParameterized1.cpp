// CPP program to illustrate 
// parameterized constructors 
#include <iostream> 
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        //Parameterized constructor
        Point(int x1, int y1)
        {
            x = x1;
            y = y1;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }

};
 
int main()
{
    Point p1(10, 20);

    cout << "p1.x = " << p1.getX() << "p1.y = " << p1.getY();
    return 0;
}

// p1.x = 10p1.y = 20