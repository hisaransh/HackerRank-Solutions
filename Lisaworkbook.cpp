#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector <int> arr) {
    // Complete this function
    int i,j;
    int a,page = 1,special=0;
    for(i=0;i<n;i++){
        a = arr[i];
        for(j=1;j<=a;j++){
            
            if(page == j){
                special = special +1;
            }
            if(j%k == 0 && j!= a){
                page= page + 1;
            }
        }
        page= page + 1;
    }
    return special;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = workbook(n, k, arr);
    cout << result << endl;
    return 0;
}
