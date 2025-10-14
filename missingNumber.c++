#include <iostream>
using namespace std;

int main(){
  long long n;
  cin >> n;

  int input_sum = 0;
  int expected_sum = n * (n + 1) / 2;

  // Read n-1 numbers and add them to input_sum
  for(int i = 0; i < n - 1; ++i){
    int num;
    cin >> num;
    input_sum += num;
  }

  int missingNumber = expected_sum - input_sum;
  cout << missingNumber << endl;
}