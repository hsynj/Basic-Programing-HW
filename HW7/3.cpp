#include <iostream>

int aval(int num){
    bool OK = false;
    if (num > 1){
        int j;
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                break;
            }
        }
        if (j * j > num) OK = true;
    }
    return OK;
}

int tavan2(int x){
    int n2 = 0;
    for(;x>9;){
        int holder = 0;
        for (; x > 0;){
            holder += (x%10)*(x%10);
            x /=10;
        }
        x = holder;
    }
    return x;
}

int main(){
    using std::cout;
    int num;
    cout << "enter your ex number: ";
    std::cin >> num;
    if (aval(num)) {
        int vizhe = tavan2(num);
        if (vizhe<10 && vizhe >= 0) cout << "adad aval vizhe ast.\n";
        else cout << "adad aval ast, vali vizhe nist.\n";
        
    } else cout << "adad aval nist";
}