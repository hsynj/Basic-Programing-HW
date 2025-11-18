#include <iostream>

int main(){
    int a, b;
    std::cout << "enter your a, b: \n";
    std::cin >> a >> b;
    int sum = 0;
    for (int num = a; num <= b; num++){
        if (num > 1){
            int j;
            for (j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    break;
                }
            }
            if (j * j > num) sum += num;
        }
    }
    std::cout << sum;
    return 0;
}