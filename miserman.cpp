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
int r,c,i,j;
   cin>>r>>c;
   int a[r+1][c+1],dp[r+1][c+1];
   int ans=0;
   for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){
        cin>>a[i][j];
        if(i==1) {
            dp[i][j]=a[i][j];
        }
        else{
            if(j==1){
                dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
            }
            else if(j==c){
                dp[i][j]=a[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
            }
            else {
                dp[i][j]=a[i][j]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
            }
        }
    }
   }
   ans=dp[r][1];
   for(j=1;j<=c;j++){
    ans=min(ans,dp[r][j]);
   }
   cout<<ans<<endl;


return 0;
}
