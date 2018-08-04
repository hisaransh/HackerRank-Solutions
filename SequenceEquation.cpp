#include <bits/stdc++.h>

using namespace std;

vector <int> permutationEquation(vector <int> p) {
    // Complete this function
    int x=1,i,j,k;
    vector <int> ans;
    int n = p.size();
    for(x=1;x<=n;x++){
      for(i=0;i<n;i++){
        if(p[i]==x){
          k = i+1;
          for(j=0;j<n;j++){
            if(p[j] == k){
              ans.push_back(j+1);
            }
          }
        }
      }
    }
return ans;

}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector <int> result = permutationEquation(p);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
