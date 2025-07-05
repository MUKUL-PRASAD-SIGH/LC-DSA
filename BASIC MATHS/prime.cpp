#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;

    for (int i = 1; i <= sqrt(n); i++) {       // O(sqrt(n))
        if (n % i == 0) {
            if (i == n / i) {
                count += 1;  // perfect square
            } else {
                count += 2;  // count both i and n/i
            }
        }
    }

    if (count == 2) {
        cout << n << " is prime." << endl;
    } else {
        cout << n << " is not prime." << endl;
    }

    return 0;
}
