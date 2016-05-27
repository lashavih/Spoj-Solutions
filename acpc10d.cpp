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
int n,i,j;
int tc=1;
while(1){
        si(n);
        if(n==0) break;
        else{
    int a[n+1][4],dp[n+1][4];
   int ans=0;
   for(i=1;i<=n;i++){
    for(j=1;j<=3;j++){
        cin>>a[i][j];
        if(i==1) {
            if(j<=2) dp[i][j]=a[i][j];
            else dp[i][j]=a[i][j]+dp[i][j-1];
        }
        else if(i==2){
           if(j==1) dp[i][j]=dp[1][2]+a[i][j];
           else if(j==2)  dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j+1],dp[i-1][j]));
           else  dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
        }
        else{
            if(j==1){
                dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
            }
            else if(j==3){
                dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
            }
            else {
                dp[i][j]=a[i][j]+min(min(dp[i-1][j-1],dp[i][j-1]),min(dp[i-1][j],dp[i-1][j+1]));
            }
        }
    }
   }
   cout<<tc<<". ";
   pi(dp[n][2]);
   tc++;
}
}


return 0;
}
