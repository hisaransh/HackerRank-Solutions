#include <bits/stdc++.h>

using namespace std;

vector <long> kaprekarNumbers(long p, long q) {
    // Complete this function
    long s;
    vector<long>ans;
    for(s=p;s<=q;s++){
      long num = s,i=-1;
      long a[100] = {0};
      num = num * num;
      while(num!=0){
        i = i+1;
        a[i] = num%10;
        num /= 10;
      }
      long n=0,m=0,j;
      long x = i/2,g=1;
      for( j = 0;j<=x;j++){
        n = n + a[j]*g;
        g = g*10;
      }
      g = 1;
      for( j = x+1;j<i+1;j++){
        m = m + a[j]*g;
        g = g*10;
      }

      if(n+m == s){
        ans.push_back(s);
      }
    }
    return ans;
}

int main() {
    long p;
    cin >> p;
    long q;
    cin >> q;
    vector <long> result = kaprekarNumbers(p, q);
    if(result.size() == 0){
      cout<<"INVALID RANGE";
    }
    else{
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }}
    cout << endl;


    return 0;
}
