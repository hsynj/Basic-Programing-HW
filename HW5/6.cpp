#include <iostream>

int main(){
    int a, b;
    std::cout << "Please enter two number ";
    std::cin >> a >> b;
    if (a > b) std::cout << "The first number is higher";
        else if (a == b) std::cout << "Your number is equal";
            else std::cout << "The second number is higher";
    return 0;
}