// DemoDestructor2.cpp
// virtuele destructor

#include <iostream>
#include <memory>
using namespace std;

class basis {
   protected:
   	  int i;
   public:
      basis(int _i) : i(_i) {
         cout<<"constructor van basis "<< i << endl;
      }
      virtual ~basis() {
         cout<<"destructor van basis "<< i << endl;
      }
};
 
class afgeleid : public basis {
   public:
      afgeleid(int i) : basis(i) {
         cout<<"constructor van afgeleid " << i << endl;
      }
      virtual ~afgeleid() {
         cout<<"destructor van afgeleid " << i << endl;
      }
};

int main() {
   cout << "basis b1(1);" << endl;
   basis b1(1);
   
   cout << "\nafgeleid a(2);" << endl;
   afgeleid a(2);
   
   cout << "\nbasis *b2 = new basis(3);" << endl;
   basis *b2 = new basis(3);
   cout << "\ndelete b2;" << endl;
   delete b2;
   
   cout << "\nbasis *b3 = new afgeleid(4);" << endl;
   basis *b3 = new afgeleid(4); 
   cout << "\ndelete b3;" << endl;
   delete b3;

   cout << "\nunique_ptr<basis> up = make_unique<afgeleid>(\"5\");" << endl;
   unique_ptr<basis> up = make_unique<afgeleid>(5);

   cout << endl;
   return 0;
}
