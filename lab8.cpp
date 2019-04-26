#include <iostream>
using namespace std;

class Version 
{
    public:
    int major, minor, service_pack;

    Version& setMinor(int minor)
    {
      this->minor = minor;
      return *this;
    }
    Version& setMajor(int major)
    {
        this->major = major;
        return *this;
    }
    Version& setService_pack(int service_pack)
    {
        this->service_pack = service_pack;
        return *this;
    }
    int getMinor() const 
    {
        return this->minor;
    }
    int getMajor() const 
    {
        return this->major;
    }
    int getService_pack() const 
    {
        return this->service_pack;
    }
};

int main()
{
    int minor, major, service_pack;
    Version obj;
    cout << "\nEnter minor, major, and service pack: " << endl;
    cin>>minor>>major>>service_pack;
    obj.setMinor(minor).setMajor(major).setService_pack(service_pack);
    cout << "Minor: " << obj.getMinor() << "\nMajor: " << obj.getMajor() << "\nService Pack: " << obj.getService_pack();
    return 0;
}