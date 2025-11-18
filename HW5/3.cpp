#include <iostream>
int main(){
    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    if (age >= 65)
        std::cout << "Elderly";
    else if (age >= 20)
        std::cout << "Adult";
    else if (age >= 13)
        std::cout << "Teenager";
    else std::cout << "Child";
    return 0;
}