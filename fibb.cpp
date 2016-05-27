#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const ll M = 1000000007;
map<ll, ll> F;

ll f(ll n) {
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) {
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
	} else {
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
	ll n,m;
	F[0]=F[1]=1;
	cin>>n>>m;
	if(n==0 && m==0) cout<<0<<endl;
	else{
        n--;m--;
        ll ans=f(m+2)-f(n+1);
        if(ans<0) ans+=M;
        cout<<ans<<endl;
	}
    }
	return 0;
}
