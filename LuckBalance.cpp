#include <bits/stdc++.h>

using namespace std;

int luckBalance(int n, int k, vector<int> imp ,vector<int> nimp  ) {
  int i,j,ka=0;
  int l = nimp.size();
  for(i=0;i<l;i++){
    ka += nimp[i];
  }
  sort(imp.begin(),imp.end(),greater<int>());
  l = imp.size();
  for(i=0;i<k;i++)
  {
    if(i<l){
      ka+=imp[i];
    }
  }
  while(i<l){
    ka-=imp[i];
    i++;
  }
  return ka;

}

int main() {
    int n;
    int k;
    cin >> n >> k;
    int x , y;
    vector <int> important;
    vector <int> nimportant;
    for(int contests_i = 0;contests_i < n;contests_i++){
          cin>>x>>y;
          if(y == 1){
            important.push_back(x);
          }
          else{
            nimportant.push_back(x);
          }
    }
    int result = luckBalance(n, k, important , nimportant);
    cout << result << endl;
    return 0;
}
