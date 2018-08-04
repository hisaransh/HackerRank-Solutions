#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int i ,j ,k;
    int a[6] = {0};
    for(i=0;i<ar.size();i++){
      ++a[ar[i]];
    }
    int max = a[1];
    int flag = 1;
    for(j = 1 ;j<6;j++){
      if(a[j]>max){
        max = a[j];
        flag = j;
      }
    }
    return flag;

/*    int f1=0;
    int f2=0;
    int f3=0;
    int f4=0;
    int f5=0;
  for(i=0;i<ar.size();i++){
      switch(ar[i]){
        case 1:
        ++f1;
        case 2:
        ++f2;
        case 3:
        ++f3;
        case 4:
        ++f4;
        case 5:
        ++f5;
      }
    }*/



}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
