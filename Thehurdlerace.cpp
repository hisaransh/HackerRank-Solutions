#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height) {
    // Complete this function
    int max=0,sum = 0,i,j;
    for(i=0;i<height.size();i++){
      if(height[i] > max){
        max = height[i];
      }
    }
    if(max>k){
      sum = max-k;
    }
    return sum;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height);
    cout << result << endl;
    return 0;
}
