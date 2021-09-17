#include <iostream>
#include <string>
#include <algorithm>

int main() {
    bool login = false;
    std::string user = "";
    std::string pass = "";

    while(!login) {
        std::cout << "Enter username: ";
	std::cin >> user;
	std::cout << "Enter password: ";
	std::cin >> pass;
	std::for_each(user.begin(), user.end(), [](char & c) {
	    c = ::tolower(c);
	});

	if(user.compare("21_cse_c++_fall") == 0) {
	    std::cout << "Login Successful!" << std::endl;
	    login = true;
	} else {
	    std::cout << "Login FAILED" << std::endl;
	}
    }

}
