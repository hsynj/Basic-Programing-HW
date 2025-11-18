#include <iostream>
int main(){
    int a, b, c;
    std::cout << "Please enter three number for rectangle Sides: ";
    std::cin >> a >> b >> c;
    if (a+b > c || a+c > b || b+c > a)
        if (a == b && b == c) std::cout << "Motevaziol'azla";
            else if (a == b || b == c || a == c) std::cout << "Motesavio'azla";
                else std::cout << "Mokhtalefol'azla";
    else std::cout << "Invisible rectangle";
    return 0;
}