#include <iostream>

int main(){
    std::cout << "abaad matris ra vared konid: ";
    int row;
    int clumn;
    std::cin >> row >> clumn;
    int matris[row][clumn]{};

    for (int i = 0; i<row; i++){
        for (int j =0; j<clumn; j++){
            std::cout << matris[i][j] << '\t';
        }
        std::cout << '\n';
    }
    
    for (int i = 0; i<row; i++){
        for (int j =0; j<clumn; j++){
            std::cout << "enter number (0 / 1) ";
            std::cin >> matris[i][j];
            // print matris after enter number 
                for (int i = 0; i<row; i++){
                    for (int j =0; j<clumn; j++){
                        std::cout << matris[i][j] << '\t';
                    }
                    std::cout << '\n';
                }
            //
        }
    }

    // check map
    int road[row];
    for (int i = 1; i<=row; i++){
        for (int j =1; j<=clumn; j++){
            if (i==j) {
                road[i-1] = matris[i-1][j-1];
            }
        }
    }

    // is ok?
    int roadHomeOne = road[0];
    bool isOk = true;
    for (int i = 0; i<row; i++){
        if (roadHomeOne!=road[i]) isOk = false;
    }

    std::cout << (isOk ? "masir vojood darad.\n" : "masir vojood nadarad.\n");

    return 0;
}