#include <bits/stdc++.h>
#include<cmath>

using namespace std;

long strangeCode(long t) {
    long n=0;
    long i=0,j=0;
    // 3*(2^n) - 2
    long x = 1;
    while(t>=x){
    	n=n+1;
    	x = (3*(pow(2,n))-2);	
    }
    //cout<<"VALUE OF N IS "<< n<<endl;
    //cout<<x<<endl;
    cout<<x-t<<endl;
    /*j=3;
    for(i=1;i<n;i++){
    	j = j*2;
    }
    cout<<"VALUE OF j IS "<< j<<endl;*/
}

int main() {
    long t;
    cin >> t;
    strangeCode(t);
    //long result = strangeCode(t);
    //cout << result << endl;
    return 0;
}
