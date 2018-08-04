#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int flag =0;
    int i,j,sum;
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        sum = ar[i]+ar[j];
        if(sum%k == 0){
          flag += 1;
        }
      }
    }
    return flag;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
