#include <iostream>

int main(){
    std::cout << "Please enter number ";
    int input;
    std::cin >> input;
    if (input > 0) std::cout << "your number is positive.";
    else if (input == 0) std::cout << "your number is zero";
        else std::cout << "your number is negative";
    return 0;
}