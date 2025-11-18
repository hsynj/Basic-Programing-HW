#include <iostream>

int CrPlNum = 0;
int CrNum = 0;

int numExtracter(int x){
    int a;
    a = x % 10;
    x = x / 10;
    return a;
}

int checkNum1(int x){
    if (x==8) CrNum++;
    else if (x==5) CrNum++;
    else if (x==0) CrPlNum++;
    return 0;
}

int checkNum2(int x){
    if (x==8) CrNum++;
    else if (x==5) CrPlNum++;
    else if (x==0) CrNum++;
    return 0;
}

int checkNum3(int x){
    if (x==8) CrPlNum++;
    else if (x==5) CrNum++;
    else if (x==0) CrNum++;
    return 0;
}

int main(){
    int ex_num{850};
    int i{1};
    while (true){
        int intg;
        std::cout << "enter your intager: ";
        std::cin >> intg;

        if (intg==ex_num) break;
        else {
            checkNum1(numExtracter(intg));
            checkNum2(numExtracter(abs(intg/10)));
            checkNum3(numExtracter(abs(intg/100)));
            std::cout << "Tedad argham ba makan haye dorost " << CrPlNum << std::endl;
            std::cout << "Tedad argham ba makan haye nadorost " << CrNum << "\nAgain ";
            CrPlNum = 0;
            CrNum = 0;
            i++;
        }
        }
    std::cout << "Shoma bad az " << i << " bar talash, movafaq be hads shodid.";
    return 0;
}