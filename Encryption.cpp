#include <bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;

void encryption(string s) {
    int l = s.size();
    int k=0,f,c,i,j;
    f = floor(sqrt(l));
    c = ceil(sqrt(l));
    while(f*c<l){
      f = f+1;
    }
    char a[f][c];

    // Complete this function
    for(i=0;i<f;i++){
      for(j=0;j<c;j++){
        if(k<l){
          a[i][j] = s[k];
          k = k+1;
        }
        else{
          a[i][j] = '0';
        }
      }
    }
    for(i=0;i<f;i++){
      for(j=0;j<c;j++){
      //  if(a[j][i]!= 0)
        cout<<a[i][j];

      }
      cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(i=0;i<c;i++){
      for(j=0;j<f;j++){
        if(a[j][i]!= '0')
        cout<<a[j][i];
      }
      cout<<" ";
    }
}

int main() {
    string s;
    cin >> s;
    encryption(s);
    return 0;
}
