#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    long long move = 0; // change to long long
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            int difference = arr[i - 1] - arr[i];
            move += difference;
            arr[i] = arr[i - 1];
        }
    }

    cout << move << endl;
}
