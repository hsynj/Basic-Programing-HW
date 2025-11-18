#include <iostream>

void Model1(int x){
    for (int i = 1; i <= x; i++){
        for (int n=i; n>0; n--){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
void Model2(int x){
    int size = x * 2 - 1;

    for (int i = 0; i < size; i++) {       // radif
        for (int j = 0; j < size; j++) {   // sotoon
            int value = x - std::min(std::min(i, j), std::min(size - i - 1, size - j - 1));
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
}
void Model3(int x){
    for (int i = x; i >= 1; i-=2){
        for (int n=x-i; n>0; n-=2){
            std::cout << " ";
        }
        for (int n=i; n>0; n--){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    // adad zoj
    if (x%2==0){
        for (int i = 4; i<=x; i+=2){
            for (int n=x-i; n>0; n-=2){
                std::cout << " ";
            }
            for (int n=i; n>0; n--){
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    // adad fard
    else {
        for (int i = 3; i<=x; i+=2){
            for (int n=x-i; n>0; n-=2){
                std::cout << " ";
            }
            for (int n=i; n>0; n--){
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
}

int main(){
    int model;
    std::cout << "Please select your model: 1 , 2 , 3\n";
    std::cin >> model;
    int number;
    std::cout << "Ok! Enter your number: ";
    std::cin >> number;
    if (model==1) Model1(number);
    else if (model==2) Model2(number);
        else if (model==3) Model3(number);
            else std::cout << "Incorrect model";
    return 0;
}