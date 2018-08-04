#include <bits/stdc++.h>

using namespace std;

void insertionSort2(int n, vector <int> arr) {
    // Complete this function
    int i,j,k;
    int hold;
    for(i=1;i<=n-1;i++){
      j=i;
      hold = arr[i];
      while(j>0 && arr[j-1] > hold){
        arr[j] = arr[j-1];
        j--;
      }
      arr[j] = hold;
      for(k = 0; k < n; k++){
         cout<< arr[k]<<" ";
      }
      cout<<endl;
    }
  
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort2(n, arr);
    return 0;
}
