#include<bits/stdc++.h>
#define ll long long int
#define M 1000000007

using namespace std;

ll phi(ll n){
    ll res=n;
    for (ll p=2; p*p<=n; ++p){
        if (n%p==0){
            while (n % p == 0) n/= p;
            res-= res/p;
        }
    }

    if (n > 1) res-=res/n;
    return res;
}

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
ll gcd(ll m,ll n){
	return n == 0 ? m : gcd(n,m % n);
}


int main(){
    int t;
    cin>>t;
    while(t--){
    ll n,k; cin>>n>>k;
    if(k==0) cout<<phi(n)%M<<endl;
    else {
       if(n<=10000){
        ll sum=1;
        for(ll i=2;i<n;i++){
            if(gcd(i,n)==1) sum+=modular_pow(i,k,M);
        }
        cout<<sum%M<<endl;
        }
        else{
            ll temp1,temp2,sum,val;
          temp1=phi(n);
          temp1=temp1%M;
          temp2=n%M;
          val=modular_pow(2,M-2,M);
          sum=(temp1*temp2)%M;
          sum=(sum*val)%M;
        cout<<sum<<endl;
        }
    }
    }
    return 0;
}
