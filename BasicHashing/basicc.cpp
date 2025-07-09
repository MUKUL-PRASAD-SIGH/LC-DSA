#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequencies using hashing
    const int MAX_VAL = 12; // adjust as per your constraints
    int hash[MAX_VAL + 1] = {0}; // hash[0...12] initialized to 0

    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1; // increment count for arr[i]
    }

    // Query phase
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter the numbers you want to query:\n";
    while (q--) {
        int number;
        cin >> number;

        // Fetch and print the frequency
        if (number >= 0 && number <= MAX_VAL) {
            cout << "Frequency of " << number << " = " << hash[number] << endl;
        } else {
            cout << "Number " << number << " is out of bounds for hashing array.\n";
        }
    }

    return 0;
}
// This code implements a basic hashing technique to count the frequency of elements in an array.
// It uses a fixed-size array to store frequencies, which is efficient for small ranges of integers.
// The code is designed to be simple and straightforward, suitable for educational purposes.            