#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int a[10000002];
int val[10000002]={0};
ll ans[10000002];
void sieve(){
int i,j;
for(i=0;i<10000002;i++){ a[i]=true;}
a[0]=false;a[1]=false;
for(i=2;i*i<10000002;i++){
    for(j=i*i;j<10000002;j+=i){
        a[j]=false;
    }
}
for(i=2;i*i<10000002;i++){
        if(a[i]==true){
    for(j=i*i;j<10000002;j+=i){
        if(!val[j]) val[j]=i;
    }
}
}

ans[0]=ans[1]=0;
for(i=2;i<10000002;i++){
    int amaz=(a[i]?i:val[i]);
    ans[i]=ans[i-1]+amaz;
}
}


int main(){
sieve();
int t;
si(t);
while(t--){
    int n;
    si(n);
    p(ans[n]);
}
return 0;
}
