#include <iostream>
using namespace std;

class Subber {
    private:
        //hidden from the world
        int total;

    public:
        //constructor
        Subber (int i = 100) {
            total = i;
        }

        void subNum(int num) {
            total -= num;
        }

        int getTotal() {
            return total;
        }
};

int main() {
    Subber sub;

    sub.subNum(10);
    sub.subNum(10);
    sub.subNum(10);

    cout << "Total: " << sub.getTotal() << endl;
    return 0;
}

//Total: 70