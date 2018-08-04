#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector <int> a) {
    // Complete this function
    int i,late=0,present=0;
    for(i=0;i<a.size();i++){
      if( a[i] <= 0){
        present = present+1;
    }
  }
    if(present>=k){
      return "NO";
    }
    else {
      return "YES";
    }
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a);
        cout << result << endl;
    }
    return 0;
}
