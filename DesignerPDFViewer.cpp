#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    int i;
    for(i=0;word[i]!='\0';){
      i = i+1;
    }
    int width = i;
    int q,j,w,max=0;
    for(j=0;j<i;j++){
      q = word[j];
      w = q-97;
      if(max<h[w]){
        max = h[w];
      }
    }
    return max*width;
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
