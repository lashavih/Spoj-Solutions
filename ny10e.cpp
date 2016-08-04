#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;


ll dp[65][10];
int main(){
for(int i=0;i<10;i++){
    dp[0][i]=1LL;
 }
for(int i=1;i<=64;i++){
    for(int j=0;j<10;j++){
        for(int k=0;k<=j;k++){
           dp[i][j]+=dp[i-1][k];
        }
    }
}
int p;
si(p);
while(p--){
    int t;ll x;
    si(t);s(x);
    printf("%d %lld\n",t,dp[x][9]);
}


return 0;
}
