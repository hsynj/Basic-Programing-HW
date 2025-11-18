#include <iostream>
#include <string>

int main(){
    std::string str{};
    std::cout << "enter your string: ";
    std::cin >> str;
    int numbers=0;
    int charecters=0;
    for (int i=0; i<str.length(); i++){
        char c = str[i];
        if (isalpha(c)) charecters++;
        if (isdigit(c)) numbers++;
    }
    std::cout << "number of digits in string: " << numbers << "\nnumber of charecters in string : " << charecters;
    return 0;
}