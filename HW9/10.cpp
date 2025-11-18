#include <iostream>
#include <string>

int main(){
    std::string entry{};
    std::cout << "enter your string: ";
    std::cin >> entry;
    int length = entry.length();
    int array[length-(length/2)];
    int j = 0;
    for (int i = 0; i<entry.length(); i++){
        char c = entry[i];
        int c2{};
        if (c != ',') {
            c2 = c - '0';
            array[j] = c2;
            j++;
        }
    }
    for (auto number : array) {
        std::cout << number << '\t';
    }
    
    return 0;
}