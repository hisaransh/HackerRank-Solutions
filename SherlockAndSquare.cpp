#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int squares(int a, int b) {
    // Complete this function
    int i,j,count=0;
    double an;
    for(i=a;i<=b;i++){
      an = sqrt(i);
      if(floor(an) == an || ceil(a) == an){
        ++count;
      }
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int a;
        int b;
        cin >> a >> b;
        int result = squares(a, b);
        cout << result << endl;
    }
    return 0;
}
