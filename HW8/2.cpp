#include <iostream>

int sortArry(int numbers[], int length){
    for (int i = 0; i < length; i++){
        int smallestIndex{i};
        for (int currentIndex = i + 1; currentIndex < length; currentIndex++ ){
            if (numbers[currentIndex] < numbers[smallestIndex]){
                smallestIndex = currentIndex;
            }
        }
        std::swap(numbers[i], numbers[smallestIndex]);
    }
    return 0;
}

int main(){
    using std::cout, std::cin;
    int length;
    cout << "please enter your number of numbers (min:20) : ";
    cin >> length;
    if (length<20){
        while (length<20){
                cout << "incorrect length\nplease enter your number of numbers (min:20) : ";
                cin >> length;
        }
    }
    int numbers[length]{};
    for (int i = 0; i < length; i++){
        cout << "please enter number " << i+1 << ' ';
        cin >> numbers[i];
    }
    sortArry(numbers, length);
    int myNum = 85;
    bool itIS = false;
    for (int i = 0; auto number : numbers){
        if (number == myNum) itIS = true;
        if (i%5==0) cout << '\n';
        cout << number << '\t';
        i++;
    }
    std::cout << (itIS ? "adade mored nazar vojood dard" :"adade morede nazar vojood nadarad.");
    return 0;
}