#include <bits/stdc++.h>

using namespace std;

vector <int> climbingLeaderboard(vector <int> scores, vector <int> alice) {
    // Complete this function
    int i,j,k,flag=0;
    vector <int> score;
    vector <int> ans;
    for(i=0;i<scores.size();i++){
      flag =0;
      for(j=i;j<scores.size();j++)
      {
        if(scores[j] == scores[i]){
          ++flag;
        }
      }
      if(flag == 1){
        score.push_back(scores[i]);
      }
    }
    for(i = 0;i<alice.size();i++){
      int max =alice[i],rank=1;
      for(j=0;j<score.size();j++){
        if(score[j]>max){
          rank = rank+1;
        }
      }
      ans.push_back(rank);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    vector <int> result = climbingLeaderboard(scores, alice);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
