#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
int n,i,m;
cin>>n>>m;
int g[n],mg[m];
for(i=0;i<n;i++){
    cin>>g[i];
}
for(i=0;i<m;i++){
    cin>>mg[i];
}
int ans=g[0];
for(i=1;i<n;i++){
    if(g[i]>ans) ans=g[i];
}
int temp=ans;
//cout<<temp<<endl;
for(i=0;i<m;i++){
    if(mg[i]>ans) ans=mg[i];
}
if(ans==temp) cout<<"Godzilla"<<endl;
else cout<<"MechaGodzilla"<<endl;
 }
return 0;
}
