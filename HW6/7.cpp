#include <iostream>

int main(){
    int BombTimer = 10;
    std::cout << "Game started.\n";
    for (int i = 1; i < 10; i++){
        srand(time(0));
        int randNum = rand() % 10;
        std::cout << "Timer: " << BombTimer << "\n";
        std::cout << i << " Second passed\n";
        std::cout << 10-i << " second left.\n";
        std::cout << "(Help: " << randNum << ")\n" ;
        std::cout << "Enter number: ";
        int n;
        std::cin >> n;
        if (n==randNum){
            std::cout << "Your intagered number is correct.\n";
            BombTimer--;
        } else std::cout << "Your intagered number is incorrect\n";
    }
    if (BombTimer==0) std::cout << "BOOOOMMMMMMMMMMMMMMMMMMMMMMMMMMMM!!";
    else std::cout << "The bomb was successfully defused.";
}