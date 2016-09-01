#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int dp[100002][2];
bool vis[100002][2];

vector<int>g[100002];

int solve(int cur,int prev,int chk){
if(vis[cur][chk]) return dp[cur][chk];
vis[cur][chk]=true;

dp[cur][chk]=chk;
for(int i=0;i<g[cur].size();i++){
    if(g[cur][i]!=prev){
        if(!chk) dp[cur][chk]+=solve(g[cur][i],cur,1);
        else dp[cur][chk]+=min(solve(g[cur][i],cur,1),solve(g[cur][i],cur,0));
    }
}

return dp[cur][chk];

}

int main(){
int n,i,j;
si(n);
memset(dp,-1,sizeof(dp));
memset(vis,false,sizeof(vis));
for(i=0;i<n-1;i++){
    int u,v;
    si(u);si(v);
    g[u].pb(v);
    g[v].pb(u);
}
int ans=1;
ans=min(solve(1,-1,0),solve(1,-1,1));
pi(ans);

return 0;
}

