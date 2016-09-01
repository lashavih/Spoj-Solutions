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

char c[202];
int main(){
int t;
si(t);
while(t--){
    int n,i,j;si(n);
    sc(c);
    int dp[n+1];
    dp[0]=0;
    dp[1]=c[0]-48;
    for(i=2;i<=n;i++){
       int temp=0;
       dp[i]=dp[i-1];
       for(j=i;j>0;j--){
        if(c[j-1]=='1') temp++;
        else temp--;
        if(temp>0) dp[i]=max(dp[i],dp[j-1]+(i-j+1));
       }
    }
    pi(dp[n]);
}

return 0;
}
