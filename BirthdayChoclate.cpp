#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int i,j;
    int sum ,flag = 0;

    for(i=0;i<n;i++){
      if(i+m-1<n){
        sum =0;
      for(j=i;j<=i+m-1;j++){
        sum +=s[j];
      }
      if(sum == d){
        flag = flag +1;
      }

  }
}
return flag;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
