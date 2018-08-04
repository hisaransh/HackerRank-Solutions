#include <bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;

string catAndMouse(int x, int y, int z) {
    // Complete this function
    int a,b,c;
    a = abs(z-y);
    b = abs(z-x);

    if(a>b){
      return "Cat A";
    }
    else if(a<b){
      return "Cat B";
    }
    else if(a=b){
      return "Mouse C";
    }
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        string result = catAndMouse(x, y, z);
        cout << result;
        cout << endl;


    }
    return 0;
}
