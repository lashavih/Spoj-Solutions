#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64d\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define N 50002
#define M 1000000007

using namespace std;

vector< pii >g[N];
int dist[N];
bool vis[N];
int n;

/*int bfs(int src){
   queue<int>q;
   for(int i=1;i<=n;i++) vis[i]=false,dist[i]=0;
   vis[src]=true;
   q.push(src);
   while(!q.empty()){
      int node=q.front();
      q.pop();
      for(int i=0;i<g[node].size();i++){
        if(!vis[g[node][i].F]){
            vis[g[node][i].F]=true;
            dist[g[node][i].F]+=dist[node]+g[node][i].S;
            q.push(g[node][i].F);
        }
      }
   }
   int rnode=0;
   int md=0;
   for(int i=1;i<=n;i++){
     if(dist[i]>md) md=dist[i],rnode=i;
   }
   return rnode;
}
*/

void dfs(int node){
   vis[node]=true;
   for(int i=0;i<g[node].size();i++){
      if(!vis[g[node][i].F]){
        vis[g[node][i].F]=true;
        dist[g[node][i].F]+=dist[node]+g[node][i].S;
        dfs(g[node][i].F);
      }
   }
}
int findmax(){
   int rnode=0;
   int md=0;
   for(int i=1;i<=n;i++){
     if(dist[i]>md) md=dist[i],rnode=i;
   }
   return rnode;
}

int main(){
int t;
si(t);
while(t--){
   si(n);
   for(int i=1;i<n;i++){
     int u,v,w;
     si(u);si(v);si(w);
     g[u].pb(mp(v,w));
     g[v].pb(mp(u,w));
   }
   //int start=bfs(1);
   //int ans=bfs(start);
   for(int i=1;i<=n;i++) dist[i]=0,vis[i]=false;
   dfs(1);
   int node=findmax();
   for(int i=1;i<=n;i++) dist[i]=0,vis[i]=false;
   dfs(node);
   int ans=findmax();
   pi(dist[ans]);
   for(int i=1;i<=n;i++) g[i].clear();
}

return 0;
}
