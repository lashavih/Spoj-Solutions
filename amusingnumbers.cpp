#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

ll power(ll x,ll y){
ll ans=1;
for(ll i=0;i<y;i++){
    ans*=x;
}
return ans;
}

int main(){
int t;
si(t);
while(t--){
    ll n,i;s(n);
    ll sum=0;ll lvl;ll ind;
    for(i=1;i<=64;i++){
        sum+=power(2,i);
        if(sum>=n) {
           lvl=i;
           sum-=power(2,i);
           ind=n-sum-1;
         break;
         }
    }
    string s;
    while(ind>0){
        if(ind%2==0) s='5'+s;
        else s='6'+s;
        ind/=2;
    }
    int len=s.size();
    for(i=0;i<lvl-len;i++){
        s='5'+s;
    }
    cout<<s<<endl;

}


return 0;
}
