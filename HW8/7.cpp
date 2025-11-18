#include <iostream>

int main() {
    int arr[15];
    std::cout << "enter 15 digits: ";
    for (int i = 0; i < 15; i++) {
        std::cin >> arr[i];
    }

    std::cout << "repeated number and tedad repeateshoon: " << '\n';
    for (int i = 0; i < 15; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < 15; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count > 1) {
                std::cout << "adade " << arr[i] << ": " << count << " bar tekrar shode ast." << '\n';
            }
        }
    }
    return 0;
}
