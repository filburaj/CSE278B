#include <iostream>
#include <string>

int main() {
    bool login = false;
    std::string user = "";
    std::string pass = "";

    while (!login) {
        std::cout << "Enter username: ";
        std::cin >> user;
	std::cout << "Enter password: ";
	std::cin >> pass;

	if(user.compare("21_CSE_c++_Fall") == 0) {
	    std::cout << "Login Successful!";
	    login = true;
	} else {
	    std::cout << "Login FAILED" << std::endl;
	}
    }
 
 }
