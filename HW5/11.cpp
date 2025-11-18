#include <iostream>

int main(){
    int a, b, c;
    int delta;
    std::cout << "Please enter a, b, c numbers ";
    std::cin >> a >> b >> c;
    std::cout << a << "x**2 + (" << b << ")x + (" << c << ")\n";
    if (a == 0) std::cout << "This is a linear equation.";
        else delta = b*b - 4 * a * c;
    if (delta > 0) std::cout << "2 raise dard";
        else if (delta == 0) std::cout << "1 raise vaghei va tekrari";
            else std::cout << "rishe haye mokhtalet dard.";
    return 0;
}