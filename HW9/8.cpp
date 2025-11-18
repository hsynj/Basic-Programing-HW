#include <iostream>
#include <string>


int main() {
    std::string str1;
    std::string str2;
    std::string result = "";

    std::cout << "enter your two strings: ";
    std::cin >> str1 >> str2;
    //
    int n1 = str1.length();
    int n2 = str2.length();
    int highesLength = std::max(n1, n2);

    for (int i = 0; i < highesLength; i++) {
        if (i< n1) result+=str1[i];
        if (i <n2) result+=str2[i];
    }
    std::cout << "combined string is: " << result;

    return 0;
}