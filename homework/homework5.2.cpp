//Hans Vos
//homework5.2
//due Feb 20

#include <iostream>

using namespace std;

class Cuboid
{
    private:
        float hth, lth, wth;
    public:
        Cuboid()
        {
            hth = 0;
            lth = 0;
            wth = 0;
        }
        Cuboid(float h, float l, float w)
        {
            hth = h;
            lth = l;
            wth = w;
        }
        float getHeight()//get function
        {
            return hth;
        }
        float getWidth()//get function
        {
            return lth;
        }
        float getLength()//get function
        {
            return lth;
        }
        void setHeight(float h)//set function
        {
            hth = h;
        }
        void setWidth(float w)//set function
        {
            wth = w;
        }
        void setLength(float l)//set function
        {
            lth = l;
        }
        float getVolume()
        {
            return lth * wth * hth;//volume of a cuboid = a * b * c
        }
        float getArea()
        {
            return (2*lth*hth)+(2*wth*lth)+(2*lth*wth);//surface area of a cubiod SA=2lh + 2wh + 2lw
        }
        void increase(float x)
        {
          hth = hth + x;
          lth = lth + x;
          wth = wth + x;
        }

};

int main()
{
    float lth, hth, wth, dimension;
    Cuboid c[2];
    for (int i=0; i<2; i++)//enter height, width, length, dimension twice
    {
      cout <<"Enter Height: ";
      cin >> hth;
      cout <<"Enter Width: ";
      cin >> wth;
      cout <<"Enter Length: ";
      cin >> lth;
      c[i].setLength(lth);
      c[i].setWidth(wth);
      c[i].setHeight(hth);
      cout<<"Enter dimension to be increased: ";
      cin >> dimension;
      c[i].increase(dimension);

    }
    for (int i = 0; i < 2; i++)
    {
      cout << "Cuboid " << (i + 1) << " Volume is " << c[i].getVolume()<< endl;
      cout << "Cuboid " << (i + 1) << " Area is " << c[i].getArea()<< endl;
    }

  return 0;
}

//output:
// Enter Height: 1
// Enter Width: 2
// Enter Length: 3
// Enter dimension to be increased: 2
// Enter Height: 2
// Enter Width: 3
// Enter Length: 4
// Enter dimension to be increased: 3
// Cuboid 1 Volume is 60
// Cuboid 1 Area is 110
// Cuboid 2 Volume is 210
// Cuboid 2 Area is 238
