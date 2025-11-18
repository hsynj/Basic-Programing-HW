#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> namesList;
    std::string entry;

    std::cout << "Enter your names (for end enter 0): " << std::endl;

    while (true) {
        std::cin >> entry;
        if (entry == "0") {
            break;
        }
        namesList.push_back(entry);
    }

    for (int i = 0; i < namesList.size(); ++i) {
        for (int j = i + 1; j < namesList.size(); ++j) {
            if (namesList[i] > namesList[j]) {
                std::swap(namesList[i], namesList[j]);
            }
        }
    }

    std::cout << "sortable names:";
    for (const auto& n : namesList) {
        std::cout << n << std::endl;
    }

    return 0;
}