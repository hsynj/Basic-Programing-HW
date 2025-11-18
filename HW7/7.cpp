#include <iostream>

int getLength(int t){
    int length = 0;
    while (t > 0){
        t /=10;
        length++;
    }
    return length;
}

int condition1(int x){
    int t = x;
    int length = getLength(x);
    bool ok = false;

    for (int i = 1; i < length - (length/2); i++){
        t /= 10;
    }
    t = t%10;
    // barresi aval boodan
    if (t > 1){
        int j;
        for (j = 2; j * j <= t; j++) {
            if (t % j == 0) {
                break;
            }
        }
        if (j * j > t) ok = true;
    }
    return ok;
}
int condition3(int x){
    int length = getLength(x);
    int r2 = 0;
    int r4 = 0;
    int t = x;
    bool ok = false;
    if (length < 4){
        r4 = 3;
        if (length < 2) r2 = 3;
    } else {
        // ragham 2
        for (int i = 0; i < length-2; i++){
            t /= 10;
        }
        r2=t%10;
        t=x;
        // ragham 4
        for (int i = 0; i < length-4; i++){
            t /= 10;
        }
        r4=t%10;
    }
    int sum = r2 + r4;
    // moraba'e kamel
    int i = 1;
    while (i*i<sum) i++;
    if (i*i == sum) ok = true;
    return ok;
}
int main(){
    int num;
    std::cout << "enter your number: ";
    std::cin >> num;
    bool ok = true;
    if (!condition1(num)) ok = false;
    if (((num/10)%10)%2!=0) ok = false;
    if (!condition3(num)) ok = false;
    std::cout << (ok ? "all is ok" : "NoNoNoNoNoNoNoNo") << "\n";
    return 0;
}