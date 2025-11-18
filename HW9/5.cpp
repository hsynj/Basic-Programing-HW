#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::cout << "enter sentence: ";
    std::getline(std::cin >> std::ws, sentence);

    bool space = false;
    std::string okSen;

    for (char c : sentence) {
        if (c == ' ') {
            if (!space) {
                okSen += c;
                space = true;
            }
        } else {
            okSen += c;
            space = false;
        }
    }

    std::cout << "your sentence: " << okSen;

    return 0;
}