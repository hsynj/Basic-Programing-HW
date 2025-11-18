#include <iostream>

int main(){
    int num;
    std::cout << "Please enter your number: ";
    std::cin >> num;
    if (num%2 == 0) std::cout << "Your number is Even";
        else std::cout << "Your number is Odd";
    return 0;
}