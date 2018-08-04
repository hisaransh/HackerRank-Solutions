#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int beautifulDays(int i, int j, int k) {
    // Complete this function
    int m,l=0,rem,a,b;
    int count =0;
    for(m=i;m<=j;m++){
        l =0;
        b=m;
        while(b>0){
          rem = b%10;
          l = l*10+rem;
          b = b/10;
        }

        a = abs(m-l);

        if(a%k == 0){
          
          ++count;
        }
    }
    return count;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
