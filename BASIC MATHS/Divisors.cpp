// DSA Notes: List all divisors of a number
#include <iostream>
using namespace std;
#include <cmath> // For sqrt function

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

//method 2
// DSA Notes: Efficiently list all divisors of a number using sqrt(n) optimization
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If i divides n, then i is a divisor
            cout << i << " ";

            // Check if the paired divisor (n / i) is different to avoid duplicates for perfect squares
            if (n / i != i) {
                cout << (n / i) << " ";
            }
        }
    }
    return 0;
}



// method 2 sorted list
// DSA Notes: List and sort divisors using vector in C++
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors; // vector to store all divisors

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i); // add i as divisor

            if (n / i != i) {
                divisors.push_back(n / i); // add paired divisor
            }
        }
    }

    // Sort the divisors in ascending order
    sort(divisors.begin(), divisors.end());

    cout << "Sorted divisors of " << n << " are: ";
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
