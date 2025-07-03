//Input, Push, and Traverse using vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr; // Declare an empty vector

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;         // Take input
        arr.push_back(x); // Push into vector
    }

    cout << "Printing using index-based loop: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Printing using range-based loop: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
