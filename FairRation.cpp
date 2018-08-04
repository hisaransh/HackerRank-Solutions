#include <bits/stdc++.h>

using namespace std;

int fairRations(vector <int> B) {
    // Complete this function
    int i;
    int sum = 0,count = 0;
    for(i=0;i<B.size();i++){
        sum += B[i];
    }
    if(sum % 2 != 0){
        return -1;
    }
    else{
        for(i=0;i<B.size()-1;i++){
            if(B[i]%2 !=0){
                B[i] = B[i]+1;
                B[i+1] = B[i+1]+1;
                count +=2;
            }
        }
        return count;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0; B_i < N; B_i++){
       cin >> B[B_i];
    }
    int result = fairRations(B);
    if(result == -1){
        cout<<"NO"<<endl;
    }else{
        cout << result << endl;
        }
    return 0;
}
