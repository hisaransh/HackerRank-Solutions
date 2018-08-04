#include <bits/stdc++.h>

using namespace std;

int taumBday(int b, int w, int x, int y, int z) {
    // Complete this function
    int c1=0,c2=0,i,j;

    if(y+z < x){
      c1 = (y+z)*b;
    }
    else{
      c1 = x*b;
    }

    if(x+z < y){
      c2 = (x+z)*w;
    }
    else{
      c2 = y*w;
    }
    return c1+c2;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}
