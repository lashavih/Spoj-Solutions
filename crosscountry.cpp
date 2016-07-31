#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

vector<int>agnes;
vector<int>tom;

int lcs(){
    int m=agnes.size();
    int n=tom.size();
   int dp[m+1][n+1];
   int i, j;
   for (i=0;i<=m;i++){
     for (j=0;j<=n;j++){
       if (i==0 || j==0) dp[i][j]=0;
       else if (agnes[i-1]==tom[j-1]) dp[i][j]=dp[i-1][j-1]+1;
       else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
     }
   }
   return dp[m][n];
}

int main(){
int d;
si(d);
while(d--){
    agnes.clear();tom.clear();int ans=0;
    while(1){
        int x;si(x);
        if(x==0) break;
        agnes.pb(x);
    }
    while(1){
        tom.clear();
        int x;si(x);
        if(x==0) break;
        tom.pb(x);
        while(true){
            si(x);
            if(x==0) break;
            tom.pb(x);
        }
        ans=max(ans,lcs());
    }
    pi(ans);
}
return 0;
}
