#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int x = n;
        while(x%3 != 0){
        	x = x - 5;
        }
        int i;
        if(x<0){
        	cout<<-1<<endl;
        }
        else{
        	vector<int> s;
        	for(i=0;i<x;i++){
        		s.push_back(5);
        	}
        	for(i=0;i<n-x;i++){
        		s.push_back(3);	
        	}
        	int l = s.size();
            for(int i=0;i<l;i++){
          		cout<<s[i];
           	}	
                	cout<<endl;
        }

    }
    return 0;
}
