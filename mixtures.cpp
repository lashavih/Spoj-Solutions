#include<bits/stdc++.h>
#define M 100
#define pb push_back
#define ll long long int

using namespace std;
int arr[102];
int dp[102][102];
int sumc(int a,int b){
    int sum=0;
for(int i=a;i<=b;i++) sum=(sum+arr[i])%M;

return sum;
}
int solve(int a,int b){
 if(dp[a][b]!=-1) return dp[a][b];

else if(a==b) {
    dp[a][b]=0;
    return 0;
}
else{
    for(int i=a;i<b;i++){
       int tmp=solve(a,i)+solve(i+1,b)+sumc(a,i)*sumc(i+1,b);
        if(dp[a][b]==-1 || tmp<dp[a][b]) {
            dp[a][b]=tmp;
        }
    }
    return dp[a][b];
}

}

int main(){
    int n;
while(scanf("%d",&n)!=EOF){
    memset(dp,-1,sizeof(dp));
    for(int  i=0;i<n;i++) cin>>arr[i];
    cout<<solve(0,n-1)<<endl;

}
return 0;
}
