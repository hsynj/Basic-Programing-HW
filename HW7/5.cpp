#include <iostream>

int main() {
    int num;
    std::cout << "Enter your number: ";
    std::cin >> num;
    for (int digit = 9; digit >= 0; digit--) {
        int temp = num;
        while (temp > 0) {
            if (temp % 10 == digit) {
                std::cout << digit;
            }
            temp /= 10;
        }
    }
    std::cout << '\n';

    return 0;
}
