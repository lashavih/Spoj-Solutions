#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int main(){
int t;
si(t);
while(t--){
    int n,u,i;
    si(n);si(u);
    int a[n],bt[n+1];
    memset(bt,0,sizeof(bt));
    int l,r,val;
    for(i=0;i<u;i++){
        si(l);si(r);si(val);
        bt[l]+=val;
        bt[r+1]-=val;
    }

    int cnt=0;
    for(i=0;i<n;i++){
        cnt+=bt[i];
        a[i]=cnt;
    }
    int q;
    si(q);
    while(q--){
        int ind;
        si(ind);
        pi(a[ind]);
    }
}
return 0;
}

