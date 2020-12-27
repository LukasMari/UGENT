#include <set>
#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    set<string> s;
    //unordered_set<string> s;
    s.insert("kiwi");
    s.insert("peer");  
    s.insert("appel");
    s.insert("banaan"); 
    
    set<string>::iterator it;
	//unordered_set<string>::iterator it;
	it = s.begin();
    while (it != s.end()) {
       cout << *it++ << endl;
    }
    
    pair<set<string>::iterator, bool> ret; 
    //pair<unordered_set<string>::iterator, bool> ret;
	ret = s.insert("banaan");
    if (ret.second) cout << "banaan toegevoegd\n";
    else cout << "banaan niet toegevoegd\n";
    cout << *ret.first << endl;
     
    string zoekwoord; 
    cout << "Wat moet ik zoeken? ";
    cin >> zoekwoord;
    cout << zoekwoord 
         << (s.count(zoekwoord) == 1 ? "" : " niet") 
         << " gevonden" << endl;
    
    s.erase("banaan");
    s.erase("druif");
    cout << "banaan en druif verwijderen;" << endl;
    cout << s.size() << endl; 
    for (const string &woord : s)
       cout << woord << endl;

    
	it = s.find("kiwi");
    if (it != s.end())
       s.erase(it);
    cout << "kiwi verwijderen met behulp van iterator" << endl;
    cout << s.size() << endl;   
    for (const string &woord : s)
       cout << woord << endl;
     
    return 0;
}
