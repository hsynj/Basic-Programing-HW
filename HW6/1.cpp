#include <iostream>

int main() {
    int input;
    std::cout << "enter your intager: ";
    std::cin >> input;

    if (input < 0) {
        std::cout << "adad bayad mosabat bashad." << std::endl;
        return 0;
    }

    int fib1 = 0, fib2 = 1, fibN;

    if (input == 0) {
        std::cout << "Fibonacci numbers: " << fib1 << std::endl;
    } else if (input == 1) {
        std::cout << "Fibonacci numbers: " << fib2 << std::endl;
    } else {
        for (int i = 2; i <= input; i++) {
            fibN = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibN;
        }
        std::cout << "Fibonacci numbers: " << fibN << std::endl;
    }
    return 0;
}
