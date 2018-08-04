#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    // Complete this function
    int count=0,valley=0;
    int i;
    for(i=0;i<n;i++){
      if(s[i] == 'U'){
        count = count+1;
        if(count == 0){
          valley = valley +1;
        }
      }
      else if(s[i] == 'D'){
        count = count -1;
      }

    }
    return valley;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
