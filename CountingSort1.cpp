#include <bits/stdc++.h>

using namespace std;

int countingSort(vector <int> arr) {
    // Complete this function
    int ans[101] = {0};
    int i;
    for(i=0;i<arr.size();i++){
      ++ans[arr[i]];
    }
    for(i=0;i<101;i++){
      cout<<ans[i]<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    countingSort(arr);

    return 0;
}
