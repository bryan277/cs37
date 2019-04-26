
#include <iostream>

using namespace std;

class Circle
{
    private:
        double radius;

    public:
        void setValues(double vradius)
        {
            radius = vradius;
        }

    double getRadius()
    {
        return radius;
    }

    
};

double getInfo(Circle &lmR1)
{
    double vradius;

    cout << "Enter radius: ";
    cin >> vradius;

    lmR1.setValues(vradius);
}

double getArea(Circle C)
{
    return (C.getRadius() * C.getRadius()) * 3.14;
}



int main()
{
    Circle myR1;
    getInfo(myR1);

    cout << "Radius: " << myR1.getRadius();

    cout << "Area: " << getArea(myR1);

    //cout << "Height: " << rlist[0].getHeight();
}

