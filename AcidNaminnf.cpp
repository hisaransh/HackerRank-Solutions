#include <bits/stdc++.h>
#include<string.h>
#include<cstring>
using namespace std;

string acidNaming(string acid_name) {
    // Complete this function
    string a = "non-metal acid";
    string b = "polyatomic acid";
    string c = "not an acid";
    char d[] = "hydro";
    string *s = &d[0];
    if(strncmp(acid_name,s,5)){
      return a;
    }
}

int main() {
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string acid_name;
        cin >> acid_name;
        string result = acidNaming(acid_name);
        cout << result << endl;
    }
    return 0;
}
