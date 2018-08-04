#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i,j;
    cin >> n;
    char a[n][n];
    for( i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    struct t{
        int row;
        int column;
    }t1[10000];
    int t2=0;
   for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j+1 < n && j-1 >=0 && i-1>=0 && i+1<n){
                int check = a[i][j];
                int a1 = a[i][j+1];
                int b = a[i][j-1];
                int c = a[i-1][j];
                int d = a[i+1][j];
                if(check > a1 && check > b && check > c && check > d){
                    t1[t2].row = i;
                    t1[t2].column = j;
                    t2++;
                }
            }
        }
    }
    for(i=0;i<t2;i++){
        a[t1[i].row][t1[i].column] = 'X';
    }
    for( i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
