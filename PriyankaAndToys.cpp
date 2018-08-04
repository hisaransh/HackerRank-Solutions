#include <bits/stdc++.h>

using namespace std;

int toys(vector <int> w) {
    // Complete this function
    sort(w.begin(),w.end());
    int l = w.size();
    int i , j , k;
    int min ;
    int container =0;
    for(i=0; i<l ;i++){
        min = w[i];
        j = i+1;
        while(w[j] <= min+4){
            j = j+1;
        }
        i = j-1;
        ++container;
    }
    return container;   
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for(int w_i = 0; w_i < n; w_i++){
       cin >> w[w_i];
    }
    int result = toys(w);
    cout << result << endl;
    return 0;
}
