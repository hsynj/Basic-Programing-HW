#include <iostream>
    
int main() {
    int num, orgNum, revNum = 0, holder;

    std::cout << "enter your intager: ";
    std::cin >> num;

    orgNum = num;

    while (num > 0) {
        holder = num % 10;
        revNum = revNum * 10 + holder;
        num = num / 10;
    }

    if (orgNum == revNum) 
        std::cout << "your number is palindrom." << std::endl;
    else 
        std::cout << "your number is'nt palindrom." << std::endl;

    return 0;
}
