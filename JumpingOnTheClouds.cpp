#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
    // Complete this function
    int jump=0,cloud=0,n=c.size();
    int i;
    while(cloud!=n-1){
      if(c[cloud+2] == 0  &&  cloud+2<n){
        cloud+=2;
        jump+=1;
      }
      else if(c[cloud+1] == 0 && cloud+1<n){
        cloud+=1;
        jump +=1;
      }
    }
    return jump;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}
