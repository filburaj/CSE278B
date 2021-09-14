//AJ Filburn
//CSE 278B
//9-10-2021
#include <iostream>
#include <iomanip>
#include <cmath>
//This program is designed to take radius input from the user and output
//perimeter and area to two decimal place accuracy
int main() {
    double radius = 0.0;
    //Taking input and assigning input to double radius
    std::cout << "Input the radius: ";
    std::cin >> radius;
    //Outputting perimeter and area with 2 decimal precision
    std::cout << "The perimeter is " << std::setprecision (4) << 2 * M_PI * radius << std::endl << "The area is " << std::setprecision(4) << M_PI * (radius * radius) << std::endl;

return 0;
}

