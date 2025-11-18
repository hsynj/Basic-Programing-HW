#include <iostream>

bool nonOk(int number, int average){
    int temp = average*2;
    if (number>temp) return true;
    else return false;
}
int main(){
    int dataNum=50;
    int array[dataNum];
    int arrayNumSum = 0;
    for (int i=0 ;i<dataNum; i++ ){
        std::cout << "enter your entry: \n";
        std::cin >> array[i];
        arrayNumSum += array[i];
    }
    double average = static_cast<double>(arrayNumSum)/dataNum;
    for (int i =0; i<dataNum; i++){
        bool whatIs = nonOk(array[i], average);
        if (whatIs) std::cout << "adad \"" << array[i] << "\" dar moqeiate \"" << i<<"\" qeyre adi ast.\n";
    }
    return 0;
}