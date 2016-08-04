#include<bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
int n,m,i,j,u,v;
int a[2002][2002];
int visited[2002];
bool dfs(int u){
     visited[u]=1;
    queue<int>st;
    st.push(u);
    while (!st.empty()){
        i = st.front();
        st.pop();
        for (j=1;j<=n;j++){
            if (a[i][j] && visited[j] == -1){
                visited[j] = 1-visited[i];
                st.push(j);
            }
            else if (a[i][j] && visited[j] == visited[i]) return false;
        }
    }
    return true;
}
 
int main(){
int t;
scanf("%d",&t);
int j=1;
while(t--){
   memset(a,0,sizeof(a));
   scanf("%d %d",&n,&m);
for(i=0;i<m;i++){
    scanf("%d %d",&u,&v);
    a[u][v]=1;
    a[v][u]=1;
}
for(i=1;i<=n;i++) visited[i]=-1;
int flag=0;
for(i=1;i<=n;i++){
        if(visited[i]==-1){
    if(!dfs(i)){ flag=1; break;}
    }
}
 
 
if(flag)  printf("Scenario #%d:\nSuspicious bugs found!\n",j);
else printf("Scenario #%d:\nNo suspicious bugs found!\n",j);
 
j++;
}
return 0;
