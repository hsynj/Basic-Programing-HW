#include <iostream>

int main(){
    int length{};
    std::cout << "please enter array length: ";
    std::cin >> length;
    int array[length];
    std::cout << "enter " << length << "numbers: \n";
    for (int i=0; i<length; i++){
        std::cin >> array[i];
    }
    bool isOk=true;
    for (int i =0; i<length; i++){
        std::cout << array[i] << '\t' << array[length-i-1] << '\n';
        if (array[i]!=array[length-i-1]) isOk = false;
    }
    // std::cout << (isOk ? "array moteqaren ast." : "array namoteqaren ast.");
    if (isOk) std::cout << "Ok!";
    else std::cout << "NoNoNoNoNo!!!";

    return 0;
}