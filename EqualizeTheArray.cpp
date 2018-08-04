#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    // Complete this function
    int a[101] = {0};
    int i,j,k;
    for(i=0;i<arr.size();i++){
      ++a[arr[i]];
    }
    int max =0,count =0;
    for(i=0;i<101;i++){
      if(a[i]>=max){
        max = a[i];
      }
    }
    for(i=0;i<101;i++){
      if(a[i]==max){
        count = count +1;
      }
    }
    j=0;
    for(i=0;i<101;i++){
      if(a[i]<max){
        j = j+a[i];
      }
    }
    count = count-1;
    j = j + (count * max);


    return j;


}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
