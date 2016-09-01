#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;
//pentagonal number pattern

int main(){
int t;
si(t);
while(t--){
    ll n;
    s(n);
    ll d=(n+1)/3;
    ll r=(n+1)%3;
    ll pent=(3*d*d-d)/2;
    ll ans=pent+d*r;
    p(ans);
}

return 0;
}
