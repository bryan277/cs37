//class notes
//4 good to use data abstraction
//1. changes in one area of the code don't requires changes in their areas
//2. Ease of use
//3. Prevent accidents/ imcomplete changes
//4. Simplifies debugging

//tutorialspoint
//benefits of data abstraction
//- Class internals are protected from inadvertent user-level errors, which might corrupt the state of the object
//- The class implementation may evolve over time in response to changing requirements or bug reports without requiring change in user-level code.
#include <iostream>
using namespace std;

class Adder {
   public:
      // constructor
      Adder(int i = 0) {
         total = i;
      }
      
      // interface to outside world
      void addNum(int number) {
         total += number;
      }
      
      // interface to outside world
      int getTotal() {
         return total;
      };
      
   private:
      // hidden data from outside world
      int total;
};

int main() {
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}
