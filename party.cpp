#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define M 1000000007

using namespace std;

int main(){
while(1){
int w,n,i,j;
cin>>w>>n;
if(w==0 && n==0) break;
else{
int c[n],f[n];
for(i=0;i<n;i++){
    cin>>c[i]>>f[i];
}
int dp[n+1][w+1];
for(i=0;i<=n;i++){
    for(j=0;j<=w;j++){
    if(i==0 || j==0) dp[i][j]=0;
    else if(c[i-1]<=j){
        if(dp[i-1][j]>=dp[i-1][j-c[i-1]]+f[i-1]){
            dp[i][j]=dp[i-1][j];
        }
        else{
            dp[i][j]=dp[i-1][j-c[i-1]]+f[i-1];
        }
    }
    else dp[i][j]=dp[i-1][j];
    }
}
int ans=-1;
for(i=1;i<=w;i++){
    if(dp[n][i]==dp[n][w]) {ans=i; break;}
}
cout<<ans<<" "<<dp[n][w]<<endl;
}
}
return 0;
}
