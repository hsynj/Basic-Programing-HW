#include <iostream>

int main(){
    int tmpr;
    std::cout << "Please enter tempreture ";
    std::cin >> tmpr;
    if (tmpr < 0) std::cout << "Veryyyyyy cold!!";
        else if (tmpr <= 20) std::cout << "It's Cold.";
            else if (tmpr <= 35) std::cout << "The weather is mild.";
                else std::cout << "The weather is hot";
    return 0;
}
