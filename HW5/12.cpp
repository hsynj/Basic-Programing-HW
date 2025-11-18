#include <iostream>

int main(){
    int age, score;
    std::cout << "Please enter age and scores ";
    std::cin >> age >> score;
    if (age < 18)
        if (score > 50) std::cout << "Final Score: " << score * 2;
            else if (score >= 20) std::cout << "Final Score: " << score * 1.5;
                else std::cout << "Final Score: " << score;
    else if (score > 70) std::cout << "Final Score: " << score * 1.2;
        else if (score >= 40) std::cout << "Final Score: " << score * 1.1;
            else std::cout << "Final Score: " << score * 0.8;
    return 0;
}