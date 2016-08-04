#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define M 10000007

using namespace std;

ll modular_pow(ll b,ll exp, ll mod){
	    ll res=1;
	    while (exp>0) {
	        if (exp%2==1)
	            res=(res*b)%mod;
	        exp=exp>>1;
	        b=(b*b)%mod;
	    }
	    return res;
}

int main(){
while(1){
   ll n,k;
   s(n);s(k);
   if(n==0 && k==0) break;
   else{
    ll ans=(2*modular_pow(n-1,k,M))%M+modular_pow(n,k,M)+(2*modular_pow(n-1,n-1,M))%M+modular_pow(n,n,M);
    ans%=M;
    p(ans);
   }
}

return 0;
}
