#include<iostream>
#include<string>

using namespace std;

float MinGP(int yield , float bushel, float cPA);
float AvgGP(float maxGP, float minGP);

int main()
{
    float cPA, bushel, increase, minGP, maxGP, avgGP;
    int yield;
    string cropName; 

    cout << "Enter crop name: ";
    getline(cin, cropName);

    cout << "Enter cost, yield, price per bushel, and increase data: ";
    cin >> cPA >> yield >> bushel >> increase;

    // MnGP = (yield * bushel * cPA)

    cout << cropName << "Minimum profit: " << MinGP(yield, bushel, cPA); 
    minGP = MinGP(yield, bushel, cPA);
    maxGP = MinGP(yield, bushel, cPA) + (MinGP(yield, bushel, cPA)* (increase/100));
    cout << "Maximum profit: " << maxGP;
    cout << "Average profit: " << AvgGP(maxGP, minGP);
    // cout << "Maximum profit: " << 
    // MnGP(cPA, yield, bushel);
}

float MinGP(int yield, float bushel, float cPA)
{
    return yield * bushel * cPA;
}

float AvgGP(float maxGP, float minGP)
{
    return (maxGP + minGP)/2;
}

//   cin >> grade1 >> grade2 >> grade3;
