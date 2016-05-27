#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
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
                dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
            }
            else if(j==c){
                dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
            }
            else {
                dp[i][j]=a[i][j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
            }
        }
        if(dp[i][j]>ans) ans=dp[i][j];
    }
   }
    cout<<ans<<endl;
}
return 0;
}
