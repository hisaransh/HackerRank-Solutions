#include <bits/stdc++.h>

using namespace std;

long boardCutting(vector <long> cost_y, vector <long> cost_x) {
    // Complete this function
    sort(cost_y.begin(),cost_y.end(),greater<long>());
    sort(cost_x.begin(),cost_x.end(),greater<long>());
    long l = cost_y.size();
    long m = cost_x.size();
    long h = 1,v = 1;
    long sum=0;
    long i=0,j=0,k;
    long x = l+m;
    while(x!= 0){
        if(l == 0 || j>=l){
            sum += cost_x[i] * h;
            ++v;
            ++i;
            --x;
        }
        else if(m == 0 || i>=m){
            sum += cost_y[j] * v;
            ++h;
            ++j;
            --x;
        }
        else if(cost_y[j] > cost_x[i] ){
            sum += cost_y[j] * v;
            ++h;
            ++j;
            --x;   
        }
        else if(cost_y[j] < cost_x[i] ){
            sum += cost_x[i] * h;
            ++v;
            ++i;
            --x;   
        }
        else if(cost_y[j] == cost_x[i]){
            if(i == 0 && j==0){
                if(l>m){
                    sum += cost_x[i] * h;
                    ++v;
                    ++i;
                    --x;

                }
                else{
                        sum += cost_y[j] * v;
                        ++h;
                        ++j;
                        --x;
                }
            }
            else{
                if(h>v){
                    sum += cost_x[i] * h;
                    ++v;
                    ++i;
                    --x;            
                }
                else{
                    sum += cost_y[j] * v;
                    ++h;
                    ++j;
                    --x;   
                }
            }
        }
    }
    return sum %(1000000000+7) ;
}

int main() {
    long q;
    cin >> q;
    for(long a0 = 0; a0 < q; a0++){
        long m;
        long n;
        cin >> m >> n;
        vector<long> cost_y(m-1);
        for(long cost_y_i = 0; cost_y_i < m-1; cost_y_i++){
           cin >> cost_y[cost_y_i];
        }
        vector<long> cost_x(n-1);
        for(long cost_x_i = 0; cost_x_i < n-1; cost_x_i++){
           cin >> cost_x[cost_x_i];
        }
        long result = boardCutting(cost_y, cost_x);
        cout << result << endl;
    }
    return 0;
}
