#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  int current_length = 1;
  int max_length = 1;
  for(int i = 1 ; i < (int)s.size() ; i++){
    if(s[i] == s[i -1]) current_length++;
    else{
      max_length = max(current_length,max_length);
      current_length = 1;
    }
  }
  max_length = max(current_length , max_length);
  cout << max_length;
}

//2nd aprroach
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1;
    int max_count  = 1;
    for(int i = 0 ; i < s.length() - 1 ; i++){
        if(s[i] == s[i + 1]){
            count++;
            if(max_count < count) max_count = count;
        }else{
            count = 1;
        }
    }
    cout <<  max_count << endl;
}