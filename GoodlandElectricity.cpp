#include <bits/stdc++.h>

using namespace std;

int pylons(int k, vector <int> arr) {
    // Complete this function
    int n = arr.size();
    int i,j;
    bool flag = true;
    int tower = 0;
    int t[n+1] = {0};
    i=k-1;
    while(i<n && i>=0){
        if(a[i] == 1){
            ++tower;
            i = i+k;
        }
        else{
            
        }
    }
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = pylons(k, arr);
    cout << result << endl;
    return 0;
}
