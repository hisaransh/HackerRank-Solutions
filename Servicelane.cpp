#include <bits/stdc++.h>

using namespace std;

int serviceLane(int a1,int a2, vector < int > cases) {
    // Complete this function
    int minimum,i,j,k;
    minimum = cases[a1];
    for(i=a1;i<=a2;i++){
      if(cases[i]<minimum){
        minimum = cases[i];
      }
    }
    return minimum;
}

int main() {
    int n;
    int t,a,b;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0; width_i < n; width_i++){
       cin >> width[width_i];
    }
    for(int cases_i = 0;cases_i < t;cases_i++){
       cin>>a>>b;
       cout<< serviceLane(a,b,width)<<endl;
    }
    cout << endl;


    return 0;
}
