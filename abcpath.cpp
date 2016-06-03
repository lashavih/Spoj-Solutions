#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

char s[52][52];
int chk[52][52];
int n,m;
int rc[8]={-1,-1,-1,0,0,1,1,1};
int cc[8]={-1,0,1,-1,1,-1,0,1};

int ans=0;
void dfs(int r,int c,int val){
    int i;
ans=max(ans,val);
for(i=0;i<8;i++){
    int temp1=r+rc[i];int temp2=c+cc[i];
    if(temp1>=0 && temp1<n && temp2>=0 && temp2<m && !chk[temp1][temp2]){
        if(s[temp1][temp2]==s[r][c]+1){
            chk[temp1][temp2]=1;
            dfs(temp1,temp2,val+1);
        }
    }
}
}

int main(){
int i,j,t=1;
while(1){
si(n);si(m);
if(n==0 && m==0) break;
ans=0;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>s[i][j];
        chk[i][j]=0;
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(s[i][j]=='A'){
                chk[i][j]=1;
                dfs(i,j,1);
        }
    }
}
printf("Case %d: %d\n",t,ans);
t++;
}
return 0;
}
