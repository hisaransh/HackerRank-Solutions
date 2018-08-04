#include <bits/stdc++.h>

using namespace std;

long getMinimumCost(long n, long k, vector < long > c){
    // Complete this function
    int count = 0;
    int index = 1,j,i;
    sort(c.begin(),c.end(),greater <long>());
    for(i=0;i<n;i++){
        for(j = i;j<i+k;j++){
            if(j<n){
         //               cout<<c[j]<<" * "<<index<<endl;
                        count = count + (c[j] * index);
       //                 cout<<count<<endl;
                  }
      }
        i = i+k-1;
        index +=1;
    }
    return count;

}

int main() {
    long n;
    long k;
    cin >> n >> k;
    vector<long> c(n);
    for(long c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    long minimumCost = getMinimumCost(n, k, c);
    cout << minimumCost << endl;
    return 0;
}
