#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define N 10000002
#define M 1000000007

using namespace std;

bool a[N];
int lpf[N]={0};
void sieve(){
int i,j;
for(i=0;i<N;i++) a[i]=true;
a[0]=false;a[1]=false;
for(i=2;i*i<N;i++){
    if(a[i]){
    for(j=i*i;j<N;j+=i){
        a[j]=false;
    }
    }
}

for(int i=1;i<=N;i++){
    if(a[i]) lpf[i]=i;
}

lpf[1]=1;
for(i=2;i*i<N;i++){
    if(a[i]==true){
      for(j=i*i;j<N;j+=i){
        if(!lpf[j]) lpf[j]=i;
      }
   }
}
}

int main(){
sieve();
int n;
while(si(n)!=EOF){
vector<int>pf;
pf.pb(1);
while(n>1){
   int x=lpf[n];
   while(n%x==0){
       n/=x;
       pf.pb(x);
   }
}
for(int i=0;i<pf.size();i++) {
    if(i!=pf.size()-1) printf("%d x ",pf[i]);
    else pi(pf[i]);
}
}
return 0;
}
