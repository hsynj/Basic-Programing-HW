#include <iostream>
#include <string>

int main(){
    std::string entry{};
    std::cout << "Enter your entry: ";
    std::cin >> entry;
    std::cout << entry << '\n';
    bool isOk = true;
    for (int i = 0; i<entry.length(); i++){
        char c = entry[i];
        char c2 = entry[(entry.length()) - i - 1];
        std::cout << c << '\t' << c2 << '\n';
        if ( !(c == c2) ) isOk = false;
    }
    std::cout << (isOk ? "Okeye" : "NoNoNoNoNoNO");
    return 0;
}