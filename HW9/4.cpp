#include <iostream>
#include <string>

int main(){
    std::string sent{};
    std::cout << "enter a sentence: ";
    std::getline(std::cin >> std::ws, sent);
    int space = 0;
    for (int i =0; i<sent.length(); i++){
        char c = sent[i];
        if (c == ' ') space++;
    }
    std::cout << "tedad kalamat barabar ast ba " << space+1 << '\n';

    return 0;
}