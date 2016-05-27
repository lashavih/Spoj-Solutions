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

ll a[100002];
void solve(){
a[1]=1;ll i;
for(i=2;i<100002;i++){
    a[i]=(6*(i)*(i-1)/2)+1;
}
}

int main(){
solve();

while(1){
ll n;
cin>>n;
if(n==-1) break;
else{
        int flag=0;
 for(ll i=1;i<100002;i++){
    if(a[i]==n){
        flag=1;
        break;
    }
 }
if(flag) cout<<"Y"<<endl;
else cout<<"N"<<endl;
}
}
return 0;
}
