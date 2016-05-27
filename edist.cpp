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

int dp[2002][2002];
int main(){
int t;
cin>>t;
while(t--){
    string a,b,s1,s2;
    int i,j;
    cin>>s1>>s2;
    int l1=s1.size();int l2=s2.size();
    for(i=0;i<=l1;i++) dp[i][0]=i;
    for(j=1;j<=l2;j++) dp[0][j]=j;

    int temp;
    for(i=1;i<=l1;i++){
        for(j=1;j<=l2;j++){
            temp=((s1[i-1]==s2[j-1])?0:1)+dp[i-1][j-1];
            dp[i][j]=min(temp,min(dp[i-1][j]+1,dp[i][j-1]+1));
        }
    }
    cout<<dp[l1][l2]<<endl;

}

return 0;
}
