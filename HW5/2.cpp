#include <iostream>

int main() {
    int num;
    std::cout << "enter your num ";
    std::cin >> num;
    if (num>=0 && num<=100)
        if (num>=50)
            if (num>69)
                if (num>89)
                    std::cout << "Create";
                else std::cout << "Good";
            else std::cout << "Ok";
        else std::cout << "No No No No";
    else std::cout << "your number is out of range";
    return 0;
}