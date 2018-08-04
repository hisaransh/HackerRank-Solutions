#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k) {
    // Complete this function
    sort(prices.begin(),prices.end());
    int count = 0;
    int i=0;
    int l = prices.size();
    for(i=0;i<l;i++){
        if(k-prices[i] >= 0){
            k -=prices[i];
            ++count;
        }
        if(k<0){
            break;
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}
