#include <iostream>

int main(){
    int x;
    std::cout << "enter number ";
    std::cin >> x;
    x*=10;
    while (x>9)
    {
        int holder=0;
        x = x/100;
        if (x>0){
            holder = x%10;
            std::cout << holder;
        }
    }

    return 0;
}