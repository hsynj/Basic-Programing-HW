#include <iostream>

int main(){
    int input, x=0;
    std::cout << "Enter your num ";
    std::cin >> input;
    if (input % 3 == 0) std::cout << "your number is divisable by 3\n", x = 500;
        else x = 1000;
    if (input % 5 == 0) std::cout << "your number is divisible by 5\n", x +=600;
        else x += 1000;
    if (x == 2000) std::cout << "your number is not divisible by 3 and 5";
        else if (x == 1100) std::cout << "your number is divisible by 3 and 5";
    return 0;
}