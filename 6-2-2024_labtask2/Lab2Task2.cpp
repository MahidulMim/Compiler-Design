#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;


    std::cout << "Enter the input: ";
    std::getline(std::cin, input);

    bool hasOperator = false;


    for (char ch : input) {

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            std::cout << "operator: " << ch << std::endl;
            hasOperator = true;
        } else if (ch == '=') {
            std::cout << "operator: " << ch << std::endl;
            hasOperator = true;
        }
    }

    if (!hasOperator) {
        std::cout << "No operators found in the input." << std::endl;
    }

    return 0;
}
