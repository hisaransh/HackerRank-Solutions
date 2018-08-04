#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	long i,j,k;
	long x = -1,y = -1,z = -1;
	long n;
	cin>>n;
	vector <long> ar;
	
	int a,b,c;
	for(long i1 = 0;i1<n;i1++){
		cin>>i;
		ar.push_back(i);
	}
	bool flag = false;
	sort(ar.begin(),ar.end(),greater<long>());
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++)
			{
				a = ar[i];
				b = ar[j];
				c = ar[k];
				if (c+b >a )
			{
				x = a;
				y = b;
				z = c;
				flag = true;
				break;
			}

			}
			if(flag == true){
				break;
			}
		}
		if(flag == true){
			break;
		}
	}
	if(x == -1){
		cout<<"-1"<<endl;
	}
	else{
		cout<<z<<" "<<y<<" "<<x<<endl;	
	}
}