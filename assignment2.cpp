#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Shape
{
    public:
        Shape();
        int getArea();              // must be used
        int getLength(int,int);
        int getMaxX();
        int getMaxY();
        int getMinX();
        int getMinY();
        string getType();           // must be used (return 'Square' or 'Rectangel')
        int getWidth(int,int);
        double totArea();
        void setData();
        double layout();
        int newArea();
        void displayResultsOne();
        void displayResultsThree();
        void displayResultsFour();
        int value[4], value1[4], totalArea, newarea, length, width, area;
        string type;

    private:
        int minX, minY, maxX, maxY;
};

Shape::Shape()
{

}

int Shape::getArea()
{
    return length*width;
}
int Shape::getLength(int xcor, int ycor)
{
    return xcor - ycor;
}

int Shape::getMaxX()
{
    int MaX = value[0];
        if (value[1]>value[0])
    MaX = value[1];
        if (value[2]>value[0])
    MaX = value[2];
        if (value[3]>value[0])
    MaX = value[3];
    return MaX;
}

int Shape::getMaxY()
{
    int MaY = value1[0];
        if (value1[1]>value1[0])
    MaY = value1[1];
        if (value1[2]>value1[0])
    MaY = value1[2];
        if (value1[3]>value1[0])
    MaY = value1[3];
    return MaY;
}

int Shape::getMinX()
{
    int mix = value[0];
        if (value[1]<value[0])
    mix = value[1];
        if (value[2]<value[0])
    mix = value[2];
        if (value[3]<value[0])
    mix = value[3];
    return mix;
}

int Shape::getMinY()
{
    int miy = value1[0];
        if (value1[1]<value1[0])
    miy = value1[1];
        if (value1[2]<value1[0])
    miy = value1[2];
        if (value1[3]<value1[0])
    miy = value1[3];
    return miy;
}

string Shape::getType()
{
    if (length == width)
        return "Square ";
    else
        return "Rectangle ";
}

int Shape::getWidth(int MaY, int miy)
{
    return MaY - miy;
}

void Shape::setData()
{
    int  miy, MaX, mix, MaY;
    cin >> value[0] >> value1[0] >> value[1] >> value1[1] >> value[2] >> value1[2] >> value[3] >> value1[3];
    MaY = getMaxY();
    miy = getMinY();
    MaX = getMaxX();
    mix = getMinX();
    length = getLength(MaX, mix);
    width = getWidth(MaY, miy);
    type = getType();
    area = getArea();
}

int newLength(int newMaxX, int newMinX)
{
    int newlength;
    newMinX = 0;
    newMaxX = 15;
    return newlength = newMaxX - newMinX;
}

int newWidth(int newMaxY, int newMinY)
{
    int newwidth;
    newMinY = 0;
    newMaxY = 10;
    return newwidth = newMaxY - newMinY;
}

double newArea(int newWidth, int newLength)
{
    double newarea;
    return newarea = newWidth * newLength;
}

double layout(double totalArea, double newArea)
{
    double eff;
    return eff = (totalArea / newArea) * 100;
}

double area(int length, int width)
{
    double area;
    return area = length * width;
}

double totArea(Shape Shapes[])
{
    double totalArea;
    totalArea = 0;
    for (int i = 0; i<5; i++)
    {
        totalArea += Shapes[i].area;
    }
    return totalArea;
}

void displayResultsOne(Shape Shapes[], double totalarea)
{
    cout << "Shape#" << "Type" << "Area(sq/units)" << endl;
    for (int i = 0; i<5; i++)
    {
        cout << i + 1 << setw(10) << Shapes[i].type << Shapes[i].area << endl;
    }
    cout << "The total area of the shapes is: " << totalarea << "sq/units" << endl;
}

void displayResultsThree(int newLength, int newWidth, double newArea)
{
    cout << "Minimum material specifications:" << endl;
    cout << "Length:" << newLength << " Width: " << newWidth << " Area: " << newArea <<" sq/units"<< endl;
}

void displayResultsFour(double layout)
{
    if (layout >= 90)
        cout << "The layout is efficient, it uses " << layout << " %of the space" << endl;
    else
        cout << "The layout is not efficient, it wastes " << layout << " %of the space" << endl;
}

int main()
{
    //Declare variables
    int  newMinX = 0, newMaxX = 15, newMinY = 0, newMaxY = 10, xcor, ycor;
    string type;
    double test, newarea, totalarea;

    //declare an array of 10 objects of type Shape
    Shape Shapes[10];

    //call a function to load the user input into each object
    for (int i = 0; i<10; i++)
    {
        Shapes[i].setData();
    }
    totalarea = totArea(Shapes);

    //call a function to print results for part #1 and #2
    displayResultsOne(Shapes, totalarea);
    ycor = newWidth(newMaxY, newMinY);
    xcor = newLength(newMaxX, newMinX);
    newarea = newArea(ycor, xcor);
    cout << endl;

    //call a function to print results for part #3
    displayResultsThree(xcor, ycor, newarea);
    test = layout(totalarea, newarea);
    cout << endl;

    //print the results for part #4
    displayResultsFour(test);
}

// 0 0 0 5 14 5 14 0
// 0 10 5 10 5 5 0 5
// 10 10 10 5 5 5 5 10
// 13 7 10 7 10 8 13 8
// 10 5 10 7 15 7 15 5
// 0 14 4 10 0 10 4 14
// 4 10 8 10 8 14 4 14
// 8 10 8 14 12 14 12 10
// 14 8 14 9 10 8 10 9
// 10 9 10 10 11 10 11 9
// Shape#TypeArea(sq/units)
// 1Rectangle 70
// 2   Square 25
// 3   Square 25
// 4Rectangle 3
// 5Rectangle 10
// The total area of the shapes is: 133sq/units

// Minimum material specifications:
// Length:15 Width: 10 Area: 150 sq/units

// The layout is not efficient, it wastes 88.6667 %of the space
