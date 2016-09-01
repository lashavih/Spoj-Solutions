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
    int n,i;si(n);
    ll a[n];ll sum1=0,sum2=0;
    for(i=0;i<n;i++){
        s(a[i]);
        sum1+=i*a[i];
        sum2+=(n-1-i)*a[i];
    }
    p(sum1-sum2);
}

return 0;
}
