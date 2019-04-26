//Hans Vos
//Assignment 1
//Due 21 Feb 2019

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
//Prototypes
void getData(string*crop, double*acres, int*yield, double*bushel, double*increase);
void calculate(double*acres, int*yield, double*bushel, double*increase, double*min , double*max, double*avg);
void printResults(string*crop, double*min, double*max, double*avg);

int main()
{
  int crops = 4; //number of crops
  string *crop = new string[crops];
  int *yield = new int[crops];
  double *acres = new double[crops];
  double *increase = new double[crops];
  double *bushel = new double[crops];
  double *min = new double[crops];
  double *avg = new double[crops];
  double *max = new double[crops];
  int i = 0;
  double bestProfit = -1;
  int bestCropIndex = -1;
  while (i < crops)
  {
          //data for a crop
          getData(crop, acres,yield,bushel,increase, i);
          //calculations for the crop
          calculate(acres, yield, bushel, increase, min, max, avg, i);
          //results for the crop
          printResults(crop, min, max, avg, i);
          //keeps track of the best crop
          if (avg[i]>bestProfit)
          {
            bestProfit = avg[i];
            bestCropIndex = i;
          }
          i++;
}
      //Store best crop
      string bestCrop = crop[bestCropIndex];
      cout << endl << "Old MacDonald, you should plant " << bestCrop << endl << endl;
      return 0;
}
void getData(string*crop, double*acres, int*yield, double*bushel, double*increase, int i)
{
    cout << "\nEnter the crop name: ";
    getline(cin, crop[i]);
    cout << "Enter cost, yield, price per bushel, and increase data: ";
    cin >> acres[i] >> yield[i] >> bushel[i] >> increase[i];
    cin.ignore();
}
//Calculates min, max, avg profits
void calculate(double*acres, int*yield, double*bushel, double*increase, double*min , double*max, double*avg, int i)
{
    //Calculates the minimum price
    min[i] = (yield[i] * bushel[i]) - acres[i];
    //Maximum price
    max[i]= (((yield[i] * bushel[i])*(100+increase[i]))/100) - acres[i];
    //Average price
    avg[i] =(min[i] + max[i]) / 2;
}
//input data from user

//prints results
void printResults(string*crop, double*min, double*max, double*avg, int i)
{
    cout << "           Minimum Profit: " << "      Maximum Profit: " << "    Average Profit:\n";
    cout << crop << ": " << min[i] << setw(23) << max[i] << setw(21) << avg[i] << endl;
}
