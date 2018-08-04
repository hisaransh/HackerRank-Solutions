#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int beautifulTriplets(int d, vector <int> arr) {
    // Complete this function
    int i,j,k,l,m,n,count =0;
    for(i=0;i<arr.size();i++){
      for(j=i+1;j<arr.size();j++){
        for(k=j+1;k<arr.size();k++){
          m = abs(arr[j]-arr[i]);
          n = abs(arr[k]-arr[j]);
          if(m == d && n == d){
            count = count+1;
          }
        }
      }

    return count;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = beautifulTriplets(d, arr);
    cout << result << endl;
    return 0;
}
