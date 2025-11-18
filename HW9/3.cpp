#include <iostream>
#include <string>

int main(){
    std::string str{};
    char c1{};
    char c2{};
    std::cout << "please enter one string and two charecter: ";
    std::cin >> str >> c1 >> c2;

    for (int i =0 ; i<str.length(); i++){
        char c3 = str[i];
        if (c3 == c1) str[i]=c2 ;
    }
    std::cout << str << '\n';
    
    return 0;
}