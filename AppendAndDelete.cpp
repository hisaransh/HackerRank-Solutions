#include <bits/stdc++.h>
#include<string.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    // Complete this function
    int l1 = s.size();
    int l2 = t.size();
    int i,count = 0,m,n;

    for(i = 0;i<l1 || i<l2;i++){
      if(s[i] == t[i]){
        count = count+1;
      }
      else{
        break;
      }
    }
    cout<<"count is"<<count<<endl;
    m = l1-count;
    n = l2-count;
    if(count == l1 && count == l2){
      if(k==0){
        return "Yes";
      }
      else if(k%2 == 0){
        return "Yes";
      }
      else if(k>=l1+l2){
        return "Yes";
      }
      else{
        return "No";
      }
    }
    else if(count == 0 || n == 0 ){
        if(k>= m+n){
          return "Yes";
        }
        else{
          return "No";
        }
    }
    else{

      if(m+n == k){
        return "Yes";
      }
      else if(k>=l1+l2){
        return "Yes";
      }
      else if((k-m-n)%2 == 0 && k-m-n>0)
      {
        return "Yes";
      }
      else{
        return "No";
      }
    }
}

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    string result = appendAndDelete(s, t, k);
    cout << result << endl;
    return 0;
}
