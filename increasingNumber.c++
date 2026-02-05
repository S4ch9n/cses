#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long count = 0;   // total added value

    for (int i = 0; i < n - 1; i++) {   // stop at n-1
        if (arr[i + 1] < arr[i]) {
            long long add = arr[i] - arr[i + 1];
            count += add;              // keep track of added amount
            arr[i + 1] = arr[i];       // make array non-decreasing
        }
    }

    cout << count << endl;
    return 0;
}
