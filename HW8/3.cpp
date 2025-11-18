#include <iostream>
#include <random>

bool vizhe(int number){
    if (number%7!=0){
        return false;
    }
    else {
        int sum=0;
        while(number>0){
            sum += number%10;
            number/=10;
        }
        if (sum%2==0){
            return true;
        } else {
            return false;
        }
    }
}

int main(){
    std::mt19937 mt;
    int array[30];
    for (int i =0; i<30;i++){
        int rand = mt()%100;
        array[i] = rand;
    }
    for (int i =0; i<30;i++){
        bool isOk = vizhe(array[i]);
        if (isOk) std::cout << "Adad \"" << array[i] << "\" ba moqeiate \"" << i << "\" vizhe ast\n";
    }
    return 0;
}