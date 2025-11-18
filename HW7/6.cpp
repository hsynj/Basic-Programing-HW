#include <iostream>
#include <math.h>

void mul(){
    int a, b;
    int sum=0;
    std::cout << "a * b ? ";
    std::cin >> a >> b;
    for (int i = b; i>0; i--){
        std::cout << a;
        sum += a;
        if (i!=1) std::cout << " + ";
    }
    std::cout << " = " << sum;
}
void div(){
    int a, b;
    int sum=0;
    std::cout << "a / b ? ";
    std::cin >> a >> b;
    if (a%b==0){
        int i;
        for (i = 0; a>0 ;i++){
            a -= b;
        }
        std::cout << i;
    } else std::cout << "your numbers is'nt divisible by them.";
}
void pow(){
    int a;
    int sum=0;
    std::cout << "a * a ? ";
    std::cin >> a;
    for (int i = a; i>0; i--){
        std::cout << a;
        sum += a;
        if (i!=1) std::cout << " + ";
    }
    std::cout << " = " << sum;
}
// sin
double factorial(double number) {
    double result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}
double mysin(double number) {
    int Len = 15;
    double radian = number * M_PI / 180.0;
    double sin = 0;

    for (int i = 1; i <= Len; ++i) {
        double soorat = pow(radian, 2 * i - 1);
        double makhraj = factorial(2 * i - 1);
        if (i % 2 == 0) {
            sin -= soorat / makhraj;
        } else {
            sin += soorat / makhraj;
        }
    }
    return sin;
}
void sin(){
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;
    std::cout << '\n' << "Sin (" << number << ") = " << mysin(number) << '\n';
}

int main(){
    int op;
    std::cout << "Select your operation: \n1) zarb \n2) taghsim \n3) tavan 2 \n4) sinoos \n5) jazr\n==> ";
    std::cin >> op;

    if (op==1) mul();
    else if (op==2) div();
        else if (op==3) pow();
            else if (op==4) sin();
}