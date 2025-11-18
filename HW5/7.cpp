#include <iostream>

int main(){
    int y;
    std::cout << "Please enter year: ";
    std::cin >> y;
    if (y%4 != 0 && y%100 != 0) std::cout << "Sal kabise ast.";
        else if (y%400 == 0) std::cout << "Sal kabise ast.";
            else std::cout << "Sal kabise nist.";
    return 0;
}