#include <iostream>
#include <random>
#include <chrono>

void createMatris(int row, int clumn){
    int matris[row][clumn];
    int clumnsSum[clumn]{};
    std::mt19937 mt{static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count())};
    // Create matris
    for (int i = 0; i<row; i++){
        for (int j = 0; j<clumn; j++){
            int rand = mt()%10;
            matris[i][j] = rand;
        }
    }
    // + clumn
    for (int j = 0; j <clumn;j++){
        for (int i = 0; i<row;i++){
            clumnsSum[j] += matris[i][j];
        }
    }
    // print matris
    for (int i = 0; i<row; i++){
        for (int j =0; j<clumn; j++){
            std::cout << matris[i][j] << '\t';
        }
        std::cout << '\n';
    }
    // check higher clumn
    int highestClumn{0};
    int highestClumnsNum;
    for (int i=0;i<clumn;i++){
        if (clumnsSum[i]>highestClumn) {
            highestClumn=clumnsSum[i];
            highestClumnsNum=i;
        }
    }
    std::cout << "The highest clumns is "<< highestClumn<<" and highest clumns num is " << highestClumnsNum ;
}
int main(){
    int i;
    int j;
    std::cout << "enter i and j for matris :\n";
    std::cin >> i >> j;
    std::cout << '\n';
    createMatris(i, j);
    return 0;
}