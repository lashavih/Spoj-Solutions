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
    ll n;
    s(n);
    if(n<=3) printf("1\n");
    else{
        ll ans=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
        p(ans);
    }
}


return 0;
}
