#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int dp[20][100];

int solve(int n,int k){
if(n==0) return 0;
if(k==0) return 1;
if(dp[n][k]!=-1) return dp[n][k];

int i,ans=0;
for(i=0;(i<n && k-i>=0);i++){
    ans+=solve(n-1,k-i);
}
return dp[n][k]=ans;
}

int main(){
int d;
si(d);
while(d--){
    memset(dp,-1,sizeof(dp));
    int n,k;
    si(n);si(k);
    pi(solve(n,k));
}



return 0;
}
