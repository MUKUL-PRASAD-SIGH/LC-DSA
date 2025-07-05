#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    cout << "\n--- Method 1: Using Vectors + Divisors ---\n";

    vector<int> divisors1;
    vector<int> divisors2;

    // Collect divisors of n1
    for (int i = 1; i <= sqrt(n1); i++) {
        if (n1 % i == 0) {
            divisors1.push_back(i);
            if (i != n1 / i) {
                divisors1.push_back(n1 / i);
            }
        }
    }

    // Collect divisors of n2
    for (int j = 1; j <= sqrt(n2); j++) {
        if (n2 % j == 0) {
            divisors2.push_back(j);
            if (j != n2 / j) {
                divisors2.push_back(n2 / j);
            }
        }
    }

    // Sort both vectors for easy comparison
    sort(divisors1.begin(), divisors1.end());
    sort(divisors2.begin(), divisors2.end());

    int hcf_vector = 1; // minimum HCF possible

    // Use two pointers to find largest common element
    int i = divisors1.size() - 1;
    int j = divisors2.size() - 1;

    while (i >= 0 && j >= 0) {
        if (divisors1[i] == divisors2[j]) {
            hcf_vector = divisors1[i];
            break;
        }
        else if (divisors1[i] > divisors2[j]) {
            i--;
        }
        else {
            j--;
        }
    }

    cout << "HCF of " << n1 << " and " << n2 << " using vectors is: " << hcf_vector << endl;

    cout << "\n--- Method 2: Using min(n1, n2) Downward Check ---\n";

    int hcf_brute = 1;
    int minNum = min(n1, n2);

    for (int k = minNum; k >= 1; k--) {
        if (n1 % k == 0 && n2 % k == 0) {
            hcf_brute = k;
            break;
        }
    }

    cout << "HCF of " << n1 << " and " << n2 << " using min downward method is: " << hcf_brute << endl;

    return 0;
}
