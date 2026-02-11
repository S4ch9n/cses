#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    int applicant[n];
    int apartment[m];

    for(int i = 0; i < n; i++) cin >> applicant[i];
    for(int i = 0; i < m; i++) cin >> apartment[i];

    // Sort both arrays
    sort(applicant, applicant + n);
    sort(apartment, apartment + m);

    int i = 0, j = 0, count = 0;
    while(i < n && j < m){
        if(abs(applicant[i] - apartment[j]) <= k){
            count++;
            i++;
            j++;
        }
        else if(apartment[j] < applicant[i] - k) j++;
        else i++;
    }

    cout << count << endl;
    return 0;
}

