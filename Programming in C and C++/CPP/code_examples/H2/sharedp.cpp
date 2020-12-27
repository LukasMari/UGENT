#include <iostream>
#include <memory>
using namespace std;

void write_pointer(shared_ptr<int> p) {
   if (p) 
     cout << *p << endl; 
   else 
     cout << "empty\n";
}

int main () {
  shared_ptr<int> p1 = make_shared<int>(101);
  shared_ptr<int> p2, p3;  
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
  
  cout << "\np2.swap(p1);" << endl;
  p2.swap(p1);
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
 
  cout << "\np1 = p2;" << endl; 
  p1 = p2;                      
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 

  cout << "\n(*p2)++;" << endl;  
  (*p2)++;
  cout << "p1: ";
  write_pointer(p1);
  cout << "p2: ";
  write_pointer(p2);
  
  cout << "\np3 = move(p2);" << endl;  
  p3 = move(p2);
  cout << "p1: ";
  write_pointer(p1);
  cout << "p2: ";
  write_pointer(p2);
  cout << "p3: ";
  write_pointer(p3);
  
  cout << "\np3.reset();" << endl;
  p3.reset();
  cout << "p1: ";
  write_pointer(p1);
  cout << "p2: ";
  write_pointer(p2); 
  cout << "p3: ";
  write_pointer(p3);
  
  return 0;
}
