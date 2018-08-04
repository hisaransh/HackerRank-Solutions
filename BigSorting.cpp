#include <bits/stdc++.h>

using namespace std;

vector <string> bigSorting(vector <string> arr) {
    // Complete this function
    int i,j;
    string temp;
    for(i=0;i<arr.size();i++){
      for(j=0;j<arr.size()-1;j++){
        if (arr[j]>arr[j+1]){
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
      }
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <string> result = bigSorting(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
