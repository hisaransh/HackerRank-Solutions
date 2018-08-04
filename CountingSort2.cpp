#include <bits/stdc++.h>

using namespace std;

vector <int> countingSort(vector <int> arr) {
    // Complete this function
    vector<int> ans(101) ;
    vector<int> freq(101) = {0,};
    int i,j,k;
    for(i=0;i<arr.size();i++){
      ++freq[arr[i]];
    }
    for(i=1;i<freq.size();i++){
      freq[i] += freq[i-1];
    }

    for(i=arr.size()-1;i>=0;i++){
      ans[freq[arr[i]]-1] = arr[i];
      --freq[arr[i]];
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
    vector <int> result = countingSort(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
