#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define M 1000000007

using namespace std;

int main(){
int t;
si(t);
while(t--){
    string s;
    cin>>s;
    ll n=s.size();
    ll dp[n+1],chk[26];
    memset(dp,0,sizeof(dp));
    memset(chk,0,sizeof(chk));
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=(dp[i-1]*2)%M;
        if(chk[s[i-1]-'A']){
            dp[i]=(dp[i]-dp[chk[s[i-1]-'A']-1]+M)%M;
        }
        chk[s[i-1]-'A']=i;
    }
    cout<<dp[n]<<endl;
}

return 0;
}
