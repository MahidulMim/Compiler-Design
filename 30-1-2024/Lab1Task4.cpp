#include<iostream>

using namespace std;

int main() {
    int number, factorial;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    while (number < 0) {
        cout << "Invalid input";
        cin >> number;
    }

    factorial = 1;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
