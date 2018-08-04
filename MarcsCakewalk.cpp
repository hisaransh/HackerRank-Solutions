#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long marcsCakewalk(vector <long> calorie) {
    // Complete this function
    //sort(calorie.begin(),calorie.end(),greater <int> ());
    long i,j=0,k,l=1;
    long sum = 0;
    long min = 0;
    int  d;
    d = calorie.size();
    sort(calorie.begin(),calorie.end(),greater <int>());
    for(i=0;i<d;i++){
      min = calorie[i] * pow(2,j);
      sum += min;
      j++;
    }
    return sum;
}

int main() {
    long n;
    cin >> n;
    vector<long> calorie(n);
    for(long calorie_i = 0; calorie_i < n; calorie_i++){
       cin >> calorie[calorie_i];
    }
    long result = marcsCakewalk(calorie);
    cout << result << endl;
    return 0;
}
