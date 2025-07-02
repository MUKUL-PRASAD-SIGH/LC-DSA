// Simple DSA Notes: Count number of digits using all 3 methods
#include <iostream>
#include <cmath>
using namespace std;

// Method 1: Loop method
int countDigitsLoop(int N) {
    if (N == 0) return 1;
    int count = 0;
    while (N > 0) {
        N = N / 10;
        count++;
    }
    return count;
}

// Method 2: log10 method
int countDigitsLog(int N) {
    if (N == 0) return 1;
    return floor(log10(N)) + 1;
}

// Method 3: Recursive method
i\;
}

int main() {
    int no;
    cout << "Enter a number: ";
    cin >> no;

    cout << "Using Loop Method: " << countDigitsLoop(no) << endl;
    cout << "Using log10 Method: " << countDigitsLog(no) << endl;
    cout << "Using Recursive Method: " << countDigitsRecursive(no) << endl;

    return 0;
}