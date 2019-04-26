#include <iostream>
using namespace std;

class Adding {
    // hidden data from outside world
    private:
        int total;

    public:
    //constructor
    Adding(int i = 0) {
        total = i;
    }

    //interface to outside world
    void addNum(int num) {
        total += num;
    }

    int getTotal() {
        return total;
    }
};

int main() {
    Adding adder;

    adder.addNum(10);
    adder.addNum(100);
    adder.addNum(100);

    cout << "Total " << adder.getTotal() << endl;
    return 0;
}

// Total 210
