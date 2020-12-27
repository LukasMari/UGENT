// VbDynamicBinding.cpp
// idem als vbPolymorfisme, 
// maar methode print in klasse persoon is nu virtual

// methode print is nu ok 
// operator << werkt nog niet goed 
// (kan niet virtual gemaakt worden want is geen lidfunctie)

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class persoon {
   private:
      string naam;
   public:
      persoon(const string &nm="");
      virtual void print(bool nl=false) const;  //enkel dit aangepast!!!!
      friend ostream& operator<<(ostream&, const persoon &);
};  // persoon

class student : public persoon {
   private:
      string klascode;
   public:
      student(const string &nm="", const string &kl="");
      void print(bool nl=true) const;
      friend ostream& operator<<(ostream&, const student &);
};  // student

class leerkracht : public persoon {
   private:
      string vakgroep;
   public:
      leerkracht(const string &nm="", const string &vg="");
      void print(bool nl=true) const;
      friend ostream& operator<<(ostream&, const leerkracht &);
};  // leerkracht

persoon::persoon(const string &nm) : naam(nm) {}

void persoon::print(bool nl) const {
   cout<<naam;
   if (nl) cout<<endl; 
   else cout<<" ";
}

ostream& operator<<(ostream& os,const persoon &p) {
	os << "<< uit persoon: ";
	os << p.naam;
	return os;
}

student::student(const string &nm, const string &kl) : 
            persoon(nm),klascode(kl) {}

void student::print(bool nl) const {
   persoon::print();
   cout<<"zit in klas "<<klascode;
   if (nl) cout<<endl; 
   else cout<<" ";
}

ostream& operator<<(ostream& os,const student &st) {
	os << "<< uit Student: ";
	os << persoon(st) <<" zit in klas " << st.klascode;
	return os;
}

leerkracht::leerkracht(const string &nm, const string &vg) : 
                persoon(nm),vakgroep(vg) {}

void leerkracht::print(bool nl) const {
   persoon::print();
   cout<<"uit vakgroep "<<vakgroep;
   if (nl) cout<<endl; 
   else cout<<" ";
}

ostream& operator<<(ostream& os,const leerkracht &l) {
	os << "<< uit leerkracht: ";
	os << persoon(l) << " uit vakgroep " << l.vakgroep;
	return os;
}

int main() {
   persoon p("Leo");
   p.print(true);
   cout << p << endl;
      
   student s("Jan","1Ba3");
   s.print();
   cout << s << endl;
   
   leerkracht l("Marc","EA20");
   l.print();
   cout << l << endl;
  
   cout << "\np = l;" << endl; 
   p = l;
   p.print(true);
   cout << p << endl;
   
   //fout:
   //s = p;
   //s = (student)p;
   
   cout << "\npersoon &rp = s;" << endl;
   persoon &rp = s;  
   rp.print(true);
   cout << rp << endl;
   
   cout << "\npersoon *pp = &l;" << endl;
   persoon *pp = &l;
   (*pp).print(true);
   cout << *pp << endl;
   
   cout << "\npersoon *pp2 = new leerkracht(\"Els\",\"Talen\");" << endl;
   persoon *pp2 = new leerkracht("Els","Talen");
   pp2->print(true);
   cout << *pp2 << endl;
   delete pp2;
   
   cout << "\nunique_ptr<persoon> up = make_unique<student>(\"An\",\"Ma\");" << endl;
   unique_ptr<persoon> up = make_unique<student>("An","Ma");
   up->print(true);
   cout << *up << endl;
   
   return 0;
}
