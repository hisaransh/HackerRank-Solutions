#include <bits/stdc++.h>
#include<vector>
using namespace std;

int minimumDistances(vector <int> a) {
    // Complete this function
    int min =100001;
    vector <int> ans;
    int i,j;
    for( i=0;i<a.size();i++){
        for(j=i+1;j<a.size();j++){
            if(a[i] == a[j]){
                ans.push_back(j-i);
            }
        }
    }
    if(ans.size() == 0){
        return -1;
    }
    else{
      min = ans[0];
      for(i=0;i<ans.size();i++){
          if(ans[i]<min){
              min = ans[i];
          }
      }
      return min;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a);
    cout << result << endl;
    return 0;
}
