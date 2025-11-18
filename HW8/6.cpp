#include <iostream>
#include <vector>

// [1, -2, 3, 5, -1, 2]
/*
sum = 1 --> maxSum = 1
start = 0 / i = 0 --> end = 0

sum = 0
tempStart = 2

*/
int kadane(std::vector<int>& arr, int& start, int& end) {
    int maxSum =0;
    int sum = 0;
    int tempStart = 0;

    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];

        if (sum > maxSum) {
            maxSum = sum;
            start = tempStart;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    return maxSum;
}

int main() {
    std::vector<int> myArray;
    int n;

    std::cout << "enter array's number:(min:10) ";
    std::cin >> n;

    while(n>10){
        std::cout << "minimum is 10." << '\n';
        std::cin >> n;
    }

    std::cout << "enter number: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        myArray.push_back(num);
    }

    int start = 0;
    int end = 0;
    int maxSum = kadane(myArray, start, end);

    std::cout << "subarray with highest sum: ";
    for (int i = start; i <= end; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << '\n';

    std::cout << "subarray's sum: " << maxSum << '\n';

    return 0;
}