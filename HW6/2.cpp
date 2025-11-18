#include <iostream>

int main(){
    int sum{0};
    std::cout << "enter an intager: ";
    int num;
    std::cin >> num;
    for (int i=1; i<num; i++){
        if (num%i==0) sum+=i;
    }
    if (sum==num) std::cout << "Adad kamel ast.";
    else std::cout << "adad kamel nist.";
}