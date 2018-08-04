#include <bits/stdc++.h>

using namespace std;

int angryChildren(int k, vector <int> arr) {
    // Complete this function
    sort(arr.begin(),arr.end());
    int i,j;
    int min = arr[k-1] - arr[0];
    int n = arr.size();
    for(i=0;i+k<=n;i++){
        if(min > arr[i+k-1] - arr[i]){
            min = arr[i+k-1] - arr[i];
        }
    }
    return min;




}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = angryChildren(k, arr);
    cout << result << endl;
    return 0;
}
