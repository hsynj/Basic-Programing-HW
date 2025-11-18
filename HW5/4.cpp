#include <iostream>

int main(){
    int x, y, z;
    int max;
    std::cout << "pleas enter tree number ";
    std::cin >> x >> y >> z ;
    if (x>y) max = x ;
    else max = y ;
    if (max>z) std::cout << "the maximum number is " << max ;
    else std::cout << "the maximum number is " << z ;
    return 0 ;
}