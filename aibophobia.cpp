#include<bits/stdc++.h>

using namespace std;

int lcs(string &s1, string &s2) {
  int m = s1.size();
  int n = s2.size();
  int dp[2][n+1];

  for(int i=0; i<=m; i++) {
    int ii = i % 2;
    for(int j=0; j<=n; j++) {
      if(i==0 || j==0)
        dp[ii][j] = 0;
      else if(s1[i-1] == s2[j-1])
        dp[ii][j] = 1 + dp[1-ii][j-1];
      else
        dp[ii][j] = max(dp[1-ii][j], dp[ii][j-1]);
    }
  }

  return dp[m % 2][n];
}

int main(){
int t;
cin>>t;
while(t--){
    string s1;
    cin>>s1;
    string s2=s1;
    reverse(s2.begin(),s2.end());
    cout<<s1.size()-lcs(s1,s2)<<endl;
}


return 0;
}
