#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    // Complete this function
    int fine=-1;
    if(y1 > y2){
      fine = 10000;
    }
    if(y1<=y2 && m1<=m2 && d1<=d2){
      fine =0;
    }
    if(y1==y2 && m1==m2 && d1>d2){
      fine = 15 *(d1-d2);
    }
    if(y1==y2 &&m1>m2){
      fine = 500 *(m1-m2);
    }
    return fine;
}

int main() {
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
    return 0;
}
