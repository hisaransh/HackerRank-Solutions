#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

string gridChallenge(vector <string> grid) {
    // Complete this function
	int i,j;
	int l = grid[0].size();
	bool ans = true;
	for(i=0;i<l;i++){
		for(j=0;j<l-1;j++){
			if(grid[j][i] > grid[j+1][i]){
				ans = false;
				break;
			}
		}
		if(ans == false){
			break;
		}
	}

	if(ans == false){
		return "NO";
	}
	else{
		return "YES";
	}

}




int main() {
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    
        string s;
        vector<string> grid(n);
        for(int grid_i = 0; grid_i < n; grid_i++){
           cin >> s;
           sort(s.begin(),s.end());
           grid[grid_i] = s;
    
        }
        string result = gridChallenge(grid);
        cout << result << endl;
    }
    return 0;
}
