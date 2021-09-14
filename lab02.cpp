//AJ Filburn
//CSE 278B
//9-10-2021
#include <iostream>
#include <string>

int main () {
    //This program is design to take user input of height and width and 
    //calculate the perimeter and area of a rectangle
    int width = 0;
    int height = 0;
    //Taking user input and assigning those inputs to integer variables
    std::cout << "Enter the width: ";
    std::cin >> width;
    std::cout << "Enter the height: ";
    std::cin >> height;
    //Outputting perimeter and area to user
    std::cout << "The perimeter is " << width + width + height + height << " and the area is " << width * height << std::endl;

    return 0;
}
