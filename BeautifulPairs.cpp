#include <bits/stdc++.h>

using namespace std;

int min(int p , int o)
{
	if(p==o){
		return p;
	}
	else if(p>o){
		return o;
	}
	else{
		return p;
	}
}
int beautifulPairs(vector <int> A, vector <int> B) {
    // Complete this function
	int m[10000] = {0};
	int n[10000] = {0};
	int l = A.size();
	int i,j;
	int max = 0;
	for(i=0;i<l;i++)
	{
		++m[A[i]];
		++n[B[i]];
		if(A[i] >max){
			max = A[i];
		}
		if(B[i] > max){
			max = B[i];
		}
	}
	int k = 0;
	for(i=0;i<max + 1;i++){
		if(m[i]!=0 && n[i] != 0){
			k += min(m[i],n[i]);
		}
	}
	if(k == l){
		return l-1;
	}
	else{
		return k+1;
	}

}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    vector<int> B(n);
    for(int B_i = 0; B_i < n; B_i++){
       cin >> B[B_i];
    }
    int result = beautifulPairs(A, B);
    cout << result << endl;
    return 0;
}
