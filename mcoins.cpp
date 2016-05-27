#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

bool ans[1000002];
int main(){
int k,l,m,i;
si(k);si(l);si(m);
int a[m];
int val=0;
for(int i=0;i<m;i++){
    si(a[i]);
    if(a[i]>val) val=a[i];
}
ans[0]=false;
for(i=1;i<=val;i++){
    ans[i]=!ans[i-1];
    if(i>=k && !ans[i-k]) ans[i]=true;
    if(i>=l && !ans[i-l]) ans[i]=true;
}
for(i=0;i<m;i++){
    if(ans[a[i]]) cout<<'A';
    else cout<<'B';
}
cout<<endl;

return 0;
}
