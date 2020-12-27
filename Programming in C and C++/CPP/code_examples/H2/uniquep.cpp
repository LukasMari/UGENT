#include <iostream>
#include <memory>  //zodat unique_ptr kan gebruikt worden
using namespace std;

void write_pointer(const unique_ptr<int> &p) {
   if (p) 
     cout << *p << endl; 
   else 
     cout << "empty\n";
}
//merk op: unique pointers mogen nooit by value 
//doorgegeven worden!!

int main () {
  unique_ptr<int> p1, p2;
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
  
  p1 = make_unique<int>(); //sinds C++14
  p2 = make_unique<int>(202);
  cout << "\np1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
  
  *p1 = 101; 
  (*p2)++;
  cout << "\np1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
  
  // FOUT: 
  //p2 = p1;
  
  cout << "\np2.swap(p1);" << endl;
  p2.swap(p1);
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
   
  cout << "\np2 = move(p1);" << endl;  
  p2 = move(p1);                      
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
  
  cout << "\np2 = move(p2);" << endl;  
  p2 = move(p2);                      
  cout << "p1: ";
  write_pointer(p1); 
  cout << "p2: ";
  write_pointer(p2); 
  
  cout << "\np2.reset();" << endl; 
  p2.reset();
  cout << "p2: ";
  write_pointer(p2); 
  
  //opmerking: gebruik unique_ptr NIET om naar
  //iets te verwijzen dat reeds bestaat!
  //dat kan problemen opleveren
  //onderstaande code is dus af te raden (= NIET goed)
  cout << "\nNIET GOED" << endl;
  int getal = 5;
  unique_ptr<int> p3 = unique_ptr<int>(&getal);
  *p3 = 8;
  write_pointer(p3); 
  cout << "na reset: ";
  p3.reset();
  write_pointer(p3); 
  cout << endl << getal << endl;
  return 0;
}
