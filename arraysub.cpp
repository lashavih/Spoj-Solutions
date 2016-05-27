#include<bits/stdc++.h>

using namespace std;

int a[1000002],maxpos=-1;

int findmax(int stv,int endv){
    int maxv=a[stv];
    for(int i=stv+1;i<=endv;i++){
        if(a[i]>maxv){
            maxv=a[i];
            maxpos=i;
        }
    }
return maxv;
}

int main(){
int n,i,k;
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
cin>>k;
int maxv=findmax(0,k-1);
cout<<maxv<<" ";

for(i=k;i<n;i++){
    if(maxpos>i-k){
        if(a[i]>maxv){
            maxv=a[i];
            maxpos=i;
        }
    }
    else maxv=findmax(i-k+1,i);

    cout<<maxv<<" ";
}

return 0;
}
