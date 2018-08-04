#include <bits/stdc++.h>

using namespace std;

vector <int> largestPermutation(int k, vector <int> arr) {
    // Complete this function
    int n = arr.size();
    vector <int> pos(n+1);
    int i ;
    for(i=0;i<n;i++){
        pos[arr[i]] = i;
    }
    for(i=0;i<n;i++){
        if(k!=0){
            if(arr[i] == n-i){
                continue;
            }
            else{
                int temp = pos[n-i];
                pos[n-i] = i;
                pos[arr[i]] = temp;
                swap(arr[i],arr[temp]);
                --k;
            }
        }
    }
    return arr;

}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = largestPermutation(k, arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
