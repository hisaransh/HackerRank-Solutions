#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    // Complete this function
    int i,l,j,count =0;
    l = n;
    while(l!=0){
      j = l%10;
      l = l/10;
      if(j != 0){
        if(n%j == 0){
          count = count+1;
      }
    }
  }
    return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}
