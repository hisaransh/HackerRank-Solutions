#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    // Complete this function
    int E=100,cloud=0;
    int i,j,k;
    for(i=0;i<c.size();i++){
      if(c[i]==1){

      }
      else if(c[i]==0){

      }
    }
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
