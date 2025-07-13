#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute frequencies using map
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // print frequencies using auto iterator
    cout << "Element : Frequency" << endl;
    for(auto it = mpp.begin(); it != mpp.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        // fetch and print frequency
        cout << mpp[number] << endl;
    }

    return 0;
}
