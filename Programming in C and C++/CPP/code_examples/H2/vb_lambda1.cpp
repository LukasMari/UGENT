#include <string>
#include <iostream>
#include <functional>
using namespace std;

bool geen_hoofdletters(const string& s) {
   for (int i=0; i<s.size(); i++)
      if (isupper(s[i]))
         return false;
   return true;
}

bool zoek(const string t[], int n,
          function<bool (const string&)> func) {
   for (int i=0; i<n; i++) 
      if (func(t[i])) 
         return true;
   return false;
}

int main() {
   string mail[] = {"HN@ugent.be","st@gmail.com",
      "ab@Telenet.be","pd@ugent.be"};
   if (zoek(mail,4,geen_hoofdletters))
     cout << "adres zonder hoofdletters gevonden\n";
   if (zoek(mail,4,[](const string& addr)
         { return addr.find(".be")!=-1; }))
     cout << "adres gevonden dat .be bevat\n";
   
   //compileerfout: could not convert...  
   /*
   if (zoek(mail,4,[](const string& addr) -> string 
         {return addr + " niet gevonden";}))
      cout << "werkt niet\n";
   */
   //zelfde fout als -> string weggelaten wordt  
}





