
// DSA Notes: Armstrong Number Check using Array
#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
if (n == 0) return 1;
return floor(log10(n)) + 1;
}

int main() {
int n;
cout << "Enter a number: ";
cin >> n;


int dup = n; // store original number
int d = countDigits(n); // count number of digits

int arr[10]; // assuming max 10 digits
int i = 0;
while (n > 0) {
    arr[i] = n % 10; // store each digit in array
    n = n / 10;
    i++;}
int sum = 0;
for (int j = 0; j < d; j++) {
    sum += pow(arr[j], d); // raise each digit to power d and add to sum
}

if (sum == dup) {
    cout << dup << " is an Armstrong number." << endl;
} else {
    cout << dup << " is not an Armstrong number." << endl;
}

return 0;

}