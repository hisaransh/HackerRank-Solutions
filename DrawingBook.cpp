#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int i,j,pf=0,pb=0;
    for(i=0;i<n;){
      if(i==p||i+1==p){
        break;
      }
      else{
        pf = pf+1;
        i = i+2;
        }
    }
    if(n%2 != 0){
      for(i=n;i>0;){
        if(i==p||i-1==p){
          break;
        }
        else{
          pb = pb+1;
          i=i-2;
        }
      }
    }
    else{
      if(n==p){
        pb = 0;
      }
      else{
        pb = pb+1;
        for(i=n-1;i>0;){
          if(i==p||i-1==p){
            break;
          }
          else{
            pb = pb+1;
            i=i-2;
          }
        }
      }
    }
    if(pb<pf){
      return pb;
    }
    else{
      return pf;
    }
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
