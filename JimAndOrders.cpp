#include <bits/stdc++.h>

using namespace std;
struct data{
    int cn;
    int time;
};
/*void swapping(struct data d[],int a ,int b)
{
    int q = d[a].cn;
    int w = d[a].time;
    d[a].cn = d[b].cn;
    d[a].time = d[b].time;
    d[b].cn = q;
    d[a].time = w;
}*/

void heapify(struct data d[],int n ,int i)
{
    int largest = i;
    int l = 2*i +1;
    int r = 2*i+2;
    int lt = -1 , rt =-1;
    if(l < n && d[l].time >= d[largest].time)
        {
            lt = d[l].time;

            largest  = l;
        }
    
    if(r < n && d[r].time >= d[largest].time)
        {
            rt = d[r].time;
            largest = r;
        }
    if(lt == rt && lt!=-1 && rt!=-1){
        int a = d[l].cn;
        int b = d[r].cn;
        if(a>b){
            largest = l;
        }
        else{
            largest = r;
        }
    }
    
    if(largest != i){
        swap(d[i],d[largest]);
        heapify(d,n,largest);
    }

}

void heapsort(struct data d[],int n)
{
    int i,j;
    for(i=n/2-1;i>=0;i--){
        heapify(d , n ,i);
    }
    for(i=n-1;i>=0;i--){
        swap(d[0],d[i]);
        heapify(d , i , 0);
    }
}



int main() {
    int n;
    cin >> n;
    struct data d[n];
    int x, y;
    int i;
    for(i=0;i<n;i++){
        cin>>x;
        cin>>y;
        d[i].time = x+y;
        d[i].cn = i+1;
    }
    heapsort(d , n);
    for(i=0;i<n;i++){
        cout<<d[i].cn<<" ";
    }
    cout<<endl;
    return 0;
}
