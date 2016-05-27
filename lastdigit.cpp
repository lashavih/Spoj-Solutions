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

long modular_pow(long b,long exp, int mod){
	    long res=1;
while (exp>0) {
if (exp%2==1)
	            res=(res*b)%mod;
	        exp=exp>>1;
	        b=(b*b)%mod;
}
return res;
}

int main(){
int t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    cout<<modular_pow(a,b,10)<<endl;
}


return 0;
}
