#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;

int a[2002];int dp[2002][2002];
int solve(int start , int end , int y){
    if(start>end) return 0;
    if(dp[start][end]!=-1) return dp[start][end];
    return (dp[start][end]=max(solve(start+1, end, y+1)+y*a[start] ,solve(start,end-1,y+1)+a[end]*y));
}
int main(){
    int n;
    cin>>n;
    memset(dp , -1 , sizeof dp);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<solve(0,n-1,1)<<endl;
    return 0;
}
