#include <bits/stdc++.h>

using namespace std;

long saveThePrisoner(long n, long m, long s){
    // Complete this function
    long z;
    if(m+s-1<=n){
      return m+s-1;
    }
    else{
      z = (m - (n-s+1))%n;
      if(z==0){
        return n;
      }
      else{
        return z;
      };
    }
}

int main() {
    long t;
    cin >> t;
    for(long a0 = 0; a0 < t; a0++){
        long n;
        long m;
        long s;
        cin >> n >> m >> s;
        long result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
