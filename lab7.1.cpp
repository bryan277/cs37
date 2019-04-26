#include<iostream>

using namespace std;

class Fraction {

    private:
        int numerator, denominator;
    public:
        Fraction() {
            numerator = 0;
            denominator = 0;
        }
        Fraction(int num, int denom) {
            numerator = num;
            denominator = denom;
        }
        int getNumerator() {
            return numerator;
        }
        int getDenominator() {
            return denominator;
        }
        Fraction operator + (const Fraction& f2);
        Fraction operator - (const Fraction& f2);
       

};

        Fraction Fraction::operator + (const Fraction& f2)
        {
            return Fraction(numerator * f2.denominator - denominator, denominator * f2.denominator);
     
        }
        Fraction Fraction::operator - (const Fraction& f2)
        {
            return Fraction(numerator * f2.denominator - denominator, denominator * f2.denominator);
        }

int main() {
    Fraction f1(1,2);
    Fraction f2(1,4);
    Fraction f3 = f1 + f2;
    Fraction f4 = f1 - f2;

    cout << f1 << "+" << f2 << " = " << f3 << endl;
    // cout << "\nNumerator: " << f1.getNumerator() << "Denominator: " << f1.getDenominator() << endl;
    // cout << "\nNumerator: " << f2.getNumerator() << "Denominator: " << f2.getDenominator() << endl;
    // cout << "\nNumerator: " << f3.getNumerator() << "Denominator: " << f3.getDenominator() << endl;
    // cout << "\nNumerator: " << f4.getNumerator() << "Denominator: " << f4.getDenominator() << endl;
}


