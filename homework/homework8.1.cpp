#include <iostream>

using namespace std;

//zipcode class
class Zipcode {
    public:
        int zipcode;
        string city;
        string state;

        Zipcode()   //defaut constructor
        {
            zipcode = 0;
            city = "";
            state = "";
        }

        Zipcode(int zip, string cit, string stte)   //parameterized constructor
        {
            zipcode = zip;
            city = cit;
            state = stte;
        }
};

//person class
class Person {
    private:
        string firstName;
        string lastName;
        string address;
        Zipcode zip;
    public:
        Person(string fn, string ln, string add, int zipc, string cy, string st)
        {
            firstName = fn;
            lastName = ln;
            address = add;
            zip.zipcode = zipc;
            zip.city = cy;
            zip.state = st;
        }

        string getFirstname(){
            return firstName;
        }
        string getLastname(){
            return lastName;
        }
        string getAddress(){
            return address;
        }
        int getZipcode(){
            return zip.zipcode;
        }
        string getCity(){
            return zip.city;
        }
        string getState(){
            return zip.state;
        }
};

int main(){
    string fn, ln, add, cy, st;
    int zip;

    cout << "Enter your Firstname: " << endl;
    getline(cin, fn);
    cout << "Enter your Lastname: " << endl;
    getline(cin, ln);
    cout << "Enter your Address: " << endl;
    getline(cin, add);
    cout << "Enter your city: " << endl;
    getline(cin, cy);
    cout << "Enter your state: " << endl;
    getline(cin, st);
    cout << "Enter your zipcode: " << endl;
    cin >> zip;

    Person p(fn, ln, add, zip, cy, st);

    cout << "First Name: " << p.getFirstname() << endl;
    cout << "Last Name: " << p.getLastname() << endl;
    cout << "Address: " << p.getAddress() << endl;
    cout << "Zipcode: " << p.getZipcode() << endl;
    cout << "City: " << p.getCity() << endl;
    cout << "State: " << p.getState() << endl;
}

// Enter your Firstname: 
// Hans
// Enter your Lastname: 
// Vos
// Enter your Address: 
// 212 North Clark
// Enter your city: 
// Anaheim
// Enter your state: 
// CA
// Enter your zipcode: 
// 92868
// First Name: Hans
// Last Name: Vos
// Address: 212 North Clark
// Zipcode: 92868
// City: Anaheim
// State: CA