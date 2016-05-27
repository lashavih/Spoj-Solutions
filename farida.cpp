#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[10002];
int main(){
int t,j;
cin>>t;
for(j=1;j<=t;j++){
ll n,i;
cin>>n;
ll sum1=0,sum2=0;
for(i=1;i<=n;i++){
    cin>>a[i];
}
ll ans=0;
if(n>1){
ll dp[n+1];
dp[0]=0;dp[1]=a[1];
for(i=2;i<=n;i++){
    dp[i]=max(dp[i-1],dp[i-2]+a[i]);
}
ans=dp[n];
}
else{
    if(n==0) ans=0;
    else if(n==1) ans=a[1];
}
cout<<"Case "<<j<<": "<<ans<<endl;
}
return 0;
}
