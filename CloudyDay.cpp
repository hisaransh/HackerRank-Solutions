#include <bits/stdc++.h>
#include<cmath>
using namespace std;

long maximumPeople(vector <long> p, vector <long> x, vector <long> y, vector <long> r) {
    // Return the maximum number of people that will be in a sunny town after removing exactly one cloud.
    int max =0,z,a,b,index,m,n,i,range;
while(p.size()>0){
    max =0;
    range =0;
    for(i=0;i<p.size();i++){
      if(p[i]>=max){
        max = p[i];
        index = i;
      }
    }
    p.erase(p.begin()+index);
    z = x[index]; //location of town
    int count =0;
    for(i=0;i<y.size();i++){

      a = y[i]; //loction of cloud
      b = r[i];//coverage
      if(z >=abs(a-b)  && z<=a+b ){
        count = count+1;
      }
      else{
        range = range+p[i];
      }
    }
    if(count == 1){
      return max+range;
    }
  }

}

int main() {
    int n;
    cin >> n;
    vector<long> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector<long> x(n);
    for(int x_i = 0; x_i < n; x_i++){
       cin >> x[x_i];
    }
    int m;
    cin >> m;
    vector<long> y(m);
    for(int y_i = 0; y_i < m; y_i++){
       cin >> y[y_i];
    }
    vector<long> r(m);
    for(int r_i = 0; r_i < m; r_i++){
       cin >> r[r_i];
    }
    long result = maximumPeople(p, x, y, r);
    cout << result << endl;
    return 0;
}
