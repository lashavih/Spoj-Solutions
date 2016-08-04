#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64\n",x)

using namespace std;

bool chk[40];
int dp[40][40];
int solve(int b,int e){
if(b>e) return 1;
if(chk[e]) return 0;
if(e==b+1) return 1;

if(dp[b][e]==-1){
     dp[b][e]=0;
for(int i=b+1;i<=e;i+=2){
    if(!chk[i]){
        dp[b][e]+=solve(b+1,i-1)*solve(i+1,e);
    }
}
}
return dp[b][e];
}

int main(){
int t;
si(t);
while(t--){
    int n,k;
    si(n);si(k);
    memset(chk,false,sizeof(chk));
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<k;i++){
        int x;si(x);
        chk[x]=true;
    }
    pi(solve(1,2*n));
}
return 0;
}






