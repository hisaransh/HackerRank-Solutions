#include <bits/stdc++.h>
#include<string>
using namespace std;

long repeatedString(string s, long n) {
    // Complete this function
    long l = s.size();
    long  i,q=0,a;
    for(i=0;i<l;i++){
      if(s[i] == 'a'){
        ++q;
      }
    }
    long count=0,j;
    for(i=0;i<=n;){
      count = count +1;
      i = i+l;
    }
    a = count * q;
    j = n-i;
    if(j!=0){
      for(i=0;i<j;i++){
        if(s[i] == 'a'){
          ++a;
        }
      }
    }

    return a;
}

int main() {
    string s;
    cin >> s;
    long n;
    cin >> n;
    long result = repeatedString(s, n);
    cout << result << endl;
    return 0;
}
