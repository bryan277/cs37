#include <iostream>
#include <string>

using namespace std;

//Class definition
class CandD
{
    public:
        CandD(int id, string msg);
        ~CandD();
    private:
        int oID;
        string oMsg;
};

//Constructor definition
CandD::CandD(int id, string msg)
{
    oID = id;
    oMsg = msg;
    cout << "Object " << oID << " constructor " << oMsg << endl;
}

//Destructor definition
CandD::~CandD()
{
    cout << (oID == 1 || oID == 6 ? "\n" : "");
    cout << "Object " << oID << " destructor " << oMsg << endl;
}

//Prototytpe
void create(void);

CandD o1(1, "(globall before main)");  //global variable

int main()
{
    cout << "\nMAIN: BEGIN" << endl;
    CandD o2(2, "(local automatic - MAIN)");
    static CandD o3(3, "(local static - MAIN)");
    create();
    cout << "\nMAIN: RESUME" << endl;
    CandD o4(4, "(local automatic - MAIN)");
    cout << "\nMAIN: END" << endl;
}

//Instantiate automatic and static objects
void create(void)
{
    cout << "\nCREATE: BEGIN" << endl;
    CandD o5(5, "(local automatic - CREATE)");
    static CandD o6(6, "(local static - CREATE)");
    CandD o7(7, "(local automatic - CREATE)");
    cout << "\nCREATE: END" << endl;

    return;
}