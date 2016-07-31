#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)

using namespace std;

int a[1002];int dp[1002][1002];
int solve(int b,int e,int chk){
if(b>e) return 0;
if(dp[b][e]!=-1) return dp[b][e];
if(!chk) dp[b][e]=max(a[b]-solve(b+1,e,1),a[e]-solve(b,e-1,1));
else {
    if(a[b]>=a[e]) dp[b][e]=a[b]-solve(b+1,e,0);
    else return dp[b][e]=a[e]-solve(b,e-1,0);
}
return dp[b][e];
}

int main(){
int t=1;
while(1){
    int n;
    si(n);
    if(n==0) break;
    else{
        int i;
        memset(dp,-1,sizeof(dp));
        for(i=1;i<=n;i++) {
             si(a[i]);
        }
        int ans=solve(1,n,0);
        cout<<"In game "<<t<<", the greedy strategy might lose by as many as "<<ans<<" points."<<endl;
        t++;
    }
}

return 0;
}
