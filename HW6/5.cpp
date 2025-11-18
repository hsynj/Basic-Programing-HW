#include <iostream>

int main(){
    int ex_num{85};
    int x;
    int i{1};
    while (x!=ex_num){
        std::cout << "shanseto emtahan kon: ";
        std::cin >> x;
        if (x>ex_num) std::cout << "Bozorg tar ast.\nDobare ";
        else if (x<ex_num) std::cout << "Koochak tar ast.\nDobare ";
        i++;
    }
    std::cout << "shoma ba " << i << " bar talash, adad ra hads zadid.";
}