#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;

ll modular_pow(ll b,ll exp, int mod){
	    ll res=1;
	    while (exp>0) {
	        if (exp%2==1)
	            res=(res*b)%mod;
	        exp=exp>>1;
	        b=(b*b)%mod;
	    }
	    return res;
}

ll f[1000002];
void factcal(){
ll i;
f[0]=1;
for(i=1;i<1000002;i++){
    f[i] = (f[i-1]*i)%M;
    }
}

ll ifa[1000002];
void invf(){
ifa[0]=1;ifa[1]=1;
ll i;
    for(i=2;i<1000002;i++){
			ifa[i] = modular_pow(i,M-2, M)*(ifa[i-1]%M);
			ifa[i]%=M;
		}
}
ll ncr(ll n,ll r){
 ll i=0;
  ll res=1;
  if (r>n/2){
    r=n-r;
  }
  for (i=0;i<r;i++){
    res*=(n-i);
    res/=(i+1);
  }
  return res;

}

int main(){
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    cout<<ncr(n-1,k-1)<<endl;
}


return 0;
}
