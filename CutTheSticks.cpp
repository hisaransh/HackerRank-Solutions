#include <bits/stdc++.h>

using namespace std;

vector <int> cutTheSticks(vector <int> arr) {
    // Complete this function
    vector<int> ans;
    ans.push_back(arr.size());
    int min =arr[0];
    int i,j,k;
    int count = -1;
    while(count!=0){
      min = 10001;
    for(i=0;i<arr.size();i++){
      if(arr[i]<=min && arr[i]>0){
        min = arr[i];
      }
    }
    for(i=0;i<arr.size();i++){
      arr[i] = arr[i] - min;
    }
    count =0;
    for(i=0;i<arr.size();i++){
      if(arr[i]>0){
        count = count + 1;
      }
    }
    if(count != 0){
      ans.push_back(count);
    }
  }
  return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
