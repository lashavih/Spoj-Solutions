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
ll dp[32];
dp[0]=1;dp[1]=0;dp[2]=3;dp[3]=0;
for(int i=4;i<=30;i++) dp[i]=dp[i-2]*4-dp[i-4];
while(1){
    int n;si(n);
    if(n==-1) break;
    p(dp[n]);
}

return 0;
}
