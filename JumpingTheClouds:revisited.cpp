#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    // Complete this function
    int i,E=100,cloud=0;
    do {
      /* code */
      cloud +=k;
      if(cloud>=c.size()){

        cloud = cloud%c.size() ;
      }
      if(c[cloud] == 0){
        E = E-1;
      }
      else{
        E = E-2-1;
      }
      if(cloud>=c.size()){

        cloud = cloud%c.size() ;
      }
    } while(cloud !=0);
    return E;

}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
