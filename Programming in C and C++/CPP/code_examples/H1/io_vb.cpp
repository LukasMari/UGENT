#include <iostream>

int main() {
	int i=0;
	std::cout << "Geef twee getallen in :\n";
	int getal1, getal2;
	std::cin >> getal1 >> getal2;
	std::cout << "getal1 dec = " << getal1 << std::endl
	          << "getal1 hex = " << std::hex << getal1;
    std::cout << "\ngetal2 = " << getal2 << std::endl;  
    std::string s;
	std::cin >> s;
	std::cout << "dit gaf je in: " << s;    
	return 0;
	//ga na wat er gebeurt als je dit ingeeft:
	//123 abc
	//uitleg: zie string_inlezen_vb1.cpp
}

