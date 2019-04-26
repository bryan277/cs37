#include<iostream>
using namespace std;

class Point {

    private:
        int xcoordinate;
        int ycoordinate;
        int zcoordinate;

    public:
        //funtion prototypes
        int getXcoord(void);
        int getYcoord(void);
        int getZcoord(void);
        void setXcoord(int xcoord);
        void setYcoord(int ycoord);
        void setZcoord(int zcoord);
        double distance(void);

Point(int xcoord, int ycoord, int zcoord);

//default constructor
    Point() {
    xcoordinate = 0;
    ycoordinate = 0;
    zcoordinate = 0;
    }
    Point operator +(Point p);
    bool operator !();
};

// constructor that has two parameter
Point::Point(int xcoord, int ycoord, int zcoord) {
    xcoordinate = xcoord;
    ycoordinate = ycoord;
    zcoordinate = zcoord;
}
// getter setter methods
void Point::setXcoord(int xcoord) {
    xcoordinate = xcoord;
}
int Point::getXcoord(void) {
    return xcoordinate;
}
void Point::setYcoord(int ycoord) {
    ycoordinate = ycoord;
}
int Point::getYcoord(void) {
    return ycoordinate;
}
void Point::setZcoord(int zcoord) {
    zcoordinate = zcoord;
}
int Point::getZcoord(void) {
    return zcoordinate;
}
Point Point::operator +(Point p){
    Point t;
    t.setXcoord(this->xcoordinate + p.getXcoord());
    t.setYcoord(this->ycoordinate + p.getYcoord());
    t.setZcoord(this->zcoordinate + p.getZcoord());
    return t;
}
bool Point::operator !(){
if(this->xcoordinate==0 && this->ycoordinate==0 && this->zcoordinate==0) {
    return false;
    }
    return true;
}
// Main function for the program
int main() {
// instantiate three point objects
Point p1,p2,p3;
// initilize data members using setter methods
p1.setXcoord(5);
p1.setYcoord(5);
p1.setZcoord(5);
p2.setXcoord(10);
p2.setYcoord(10);
p2.setZcoord(10);
// add two points
p3 = p1 + p2;
// print p3 coordinates
cout << "X:" << p3.getXcoord() << " Y:" << p3.getYcoord() << " Z:" << p3.getZcoord() << endl;
// instantiate another pointer
Point p4;

if(!p4==false) {
    cout << "Point is origin" << endl;
    }
    else{
    cout << "Point is not origin" << endl;
}
return 0;
}
/*
sample output
X:15 Y:15 Z:15
Point is origin
*/