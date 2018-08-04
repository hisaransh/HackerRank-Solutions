#include <bits/stdc++.h>

using namespace std;

vector <int> circularArrayRotation(vector <int> a, vector <int> m,int k) {
    // Complete this function
    vector <int> ans;
    int i,j,l,z;
    int n = a.size();
    for(j=0;j<m.size();j++)
    {
      i = m[j];
      if(i-k>0){
        ans.push_back(a[i-k]);
      }
      else{
        ans.push_back(a[n+i-k]);
      }
    }
    return ans;
}

int main() {
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> m(q);
    for(int m_i = 0; m_i < q; m_i++){
       cin >> m[m_i];
    }
    vector <int> result = circularArrayRotation(a, m,k);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
