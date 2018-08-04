#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    // Complete this function
    int choclate;
    int w;
    choclate = n/c;
    w = choclate;
    while(w>=m){
      w = w-m;
      choclate = choclate + 1;

      w = w+1;

    }
    return choclate;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int result = chocolateFeast(n, c, m);
        cout << result << endl;
    }
    return 0;
}
