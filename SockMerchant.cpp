#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int i,j,k,m;
    int freq[101] = {0};
    for(i=0;i<ar.size();i++){
        ++freq[ar[i]];
    }

    int total=0,sum=0;
    for(j=0;j<=100;j++){
        for(k=0;k<=ar[j];){
            k=k+2;

        }
        total += k;
    }
    cout<<total<<endl;
    //sum = total/2;
    //return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    /*int result = */sockMerchant(n, ar);
    //cout << result << endl;
    return 0;
}
