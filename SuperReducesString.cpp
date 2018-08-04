#include <bits/stdc++.h>
#include<string>
using namespace std;

string super_reduced_string(string s){
    // Complete this function
    int i,j,k;
    int flag=-1;
    char p[100];
    int l =0;
    for(i=0;i<s.size()-1;i++){
        k = i+1;
        while(s[i] == s[k] && k<s.size()){
            k++;
        }
        p[l] = (s[i]);
        l++;
        i = k-1;
        flag = 0;
    }
    return p;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
