#include <iostream>

int main() {
    int num, revNum = 0, holder;

    std::cout << "enter your intager: ";
    std::cin >> num;

    while (num > 0) {
        holder = num % 10;
        revNum = revNum * 10 + holder;
        num = num / 10;
    }

    std::cout << "your reversed number is " << revNum;
    
    return 0;
}