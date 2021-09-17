#include <iostream>
#include <string>

int main() {
    int size;
    std::cout << "Enter the size of your array: ";
    std::cin >> size;
    int arr[size];
    for(int i = 0; i < size; ++i) {
        std::cout << "Enter a number: ";
	std::cin >> arr[i];
    }
    int min;
    min = arr[0];
    int max;
    max = arr[0];
    for(int i = 0; i < size; ++i) {
        if(arr[i] < min) {
	    min = arr[i];
	} else if (arr[i] > max) {
	    max = arr[i];
	}
    }
    std::cout << "The length of the array is: " << size << std::endl;
    std::cout << "The minimum is " << min << std::endl;
    std::cout << "The maximum is " << max << std::endl;

}
