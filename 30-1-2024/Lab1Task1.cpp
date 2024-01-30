#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;


    if (size <= 0) {
        std::cout << "Invalid array size" << std::endl;
        return 1;
    }

    int array[size];


    std::cout << "Enter " << size << " elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> array[i];
    }


    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }


    double average =sum / size;


    std::cout << "The average of the elements is: " << average << std::endl;

    return 0;
}
