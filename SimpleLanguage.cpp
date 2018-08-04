#include <bits/stdc++.h>
#include<cstring>
using namespace std;

/*
 * Complete the maximumProgramValue function below.
 */
long maximumProgramValue(int n) {
    /*
     * Write your code here.
     */
    char t[3];
    long x = 0;
    long y=0;
    long max = 0;
    while(n--)
    {
        cin>>t>>y;
        if(strcmp(t , "add") == 0){
            if(y>=0){
                x = x+y;
            }
        }
        else if(strcmp(t , "set") == 0){
            if(x < y){
                x = y;
            }   
        }
    }
    return x;
}

int main()
{

    int n;
    cin >> n;

    long result = maximumProgramValue(n);

    cout << result << "\n";


    return 0;
}
