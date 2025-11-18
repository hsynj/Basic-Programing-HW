#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "please enter your string: ";
    std::cin >> str;
    for (int i=0; i<str.length(); i++){
        char c = toupper(str[i]);
        str[i] = c;
    }
    std::cout << "new string is: \"" << str << '\"';
    return 0;
}