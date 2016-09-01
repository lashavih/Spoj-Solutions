#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int main(){
int dp[1002];
dp[0]=dp[1]=1,dp[2]=5,dp[3]=11;
for(int i=4;i<=1000;i++){
    dp[i]=dp[i-1]+5*dp[i-2]+dp[i-3]-dp[i-4];
}
int n,i;
si(n);
for(i=1;i<=n;i++){
    int w;
    si(w);
    printf("%d %d\n",i,dp[w]);
}

return 0;
}
//make dp table using answers of first 10 w
