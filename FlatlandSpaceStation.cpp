#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int flatlandSpaceStations(int n, vector <int> c) {
    // Complete this function
    int max=0;
    int i,j;
    int p;
    for(i=0;i<n;i++)
    {
        int min = 100000;
        for(j=0;j<c.size();j++)
        {
            p = abs(i-c[j]);
            if(p<min){
                min = p;
            }
        }
        if(min > max){
            max = min;
        }
    }
    return max;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    int result = flatlandSpaceStations(n, c);
    cout << result << endl;
    return 0;
}
