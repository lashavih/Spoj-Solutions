#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000007
#define ll long long int

using namespace std;

vector<int>g[10002];
bool chk[10002]={false};
int ans=0;
int dfs(int root){
    int m,m1=-1,m2=-1,i;
    chk[root]=true;
    for(i=0;i<g[root].size();i++){
        if(!chk[g[root][i]]){
            m = dfs(g[root][i]);
            cout<<m<<endl;
            if(m>=m1){
                m2= m1;
                m1 = m;
            }
            else if(m>m2)
                m2=m;
        }
    }
    ans= max(ans, m1+m2+2);
    return m1+1;
}

int main(){
int n,u,v,i;
cin>>n;
for(i=0;i<n-1;i++){
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
dfs(1);
cout<<ans<<endl;

return 0;
}

