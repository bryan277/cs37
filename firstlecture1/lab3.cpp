#include <iostream>
using namespace std;

int volume(int height, int length = 3, int depth = 5);

int main()
{
    int length, depth, height;
    cout << "Enter height: " << endl;
    cin >> height;
    cout << volume(height) << endl;

    cout << "Enter height and length: " << endl;
    cin >> length >> height;
    cout << volume(height, length) << endl;

    cout << "Enter height, length and depth: " << endl;
    cin >> height >> length >> depth;
    cout << "Volume is: " << volume(height, length, depth) << endl;
}

int volume(int height, int length, int depth)
{
    return height * length * depth;
}

// Enter height: 
// 10
// 150
// Enter height and length: 
// 10
// 20
// 1000
// Enter height, length and depth: 
// 10
// 20
// 30
// Volume is: 6000