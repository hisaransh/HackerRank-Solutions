#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    if(year >= 1700 && year <= 1917){
      if(year%4==0){
        return "12.09.";
      }
      else{
        return "13.09.";
      }
    }
    if(year >= 1919 && year <= 2700){
      if(year%400 == 0 || (year%4 == 0 && year%100 !=0)){
        return "12.09.";
      }
      else{
          return "13.09.";
      }
    }
    if (year == 1918){
      return "26.09.";
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result <<year<< endl;
    return 0;
}
