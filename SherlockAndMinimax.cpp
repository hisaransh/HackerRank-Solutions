#include <bits/stdc++.h>

using namespace std;

long sherlockAndMinimax(vector <long> arr, long p, long q) {
    // Complete this function
    long n = arr.size();
    sort(arr.begin(),arr.end());
    vector<long> s;
    long i,j,k;
    long po = 0;
    long prev, x , y,z;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(j=p;j<=q;j++)
    {
        if(j>=arr[n-1]){
            x = abs(j - arr[n-1]);
        }
        else if(j<=arr[0]){
            x = abs(j - arr[0]);
        }
        else{
            long prev = abs(j - arr[0]);
            for(i = 1;i<n;i++){
                if(abs(arr[i] - j) <= prev ){
                    prev = abs(arr[i] - j);
                }
                else{
                    x = prev;
                    break;
                }
                x = prev;
            }
        }
        cout<<"x =>  "<<x <<endl;
        if(po <= x){
            po = x;
        }
        s.push_back(x);
    }
    n = s.size();
    cout<<"min array"<<endl;
    for(i=0;i<n;i++){
        cout<<s[i]<<"     ";
    }
    cout<<endl;
    long freq[po+2] = {0};
    long max = 0;
    for(i=0;i<n;i++)
            {
                ++freq[s[i]];
            }
            long index;
    cout<<"frequency array   =>>>>>>>>>"<<endl;
    for(i=0;i<po+2;i++){
       
       cout<<freq[i] <<"  ";
    }
    cout<<endl;

    for(i=0;i<po+2;i++){
       if(freq[i] >max){
            max = freq[i];
            index = i;
        }
        //cout<<freq[i] <<"  ";
    }    
    //cout<<"\n\n\n";
    return index + p ;

}

int main() {
    long n;
    cin >> n;
    vector<long> arr(n);
    for(long arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    long p;
    long q;
    cin >> p >> q;
    long result = sherlockAndMinimax(arr, p, q);
    cout << result << endl;
    return 0;
}
