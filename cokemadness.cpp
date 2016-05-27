#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

ll a[1000002];
int main(){
int t;
si(t);
int j=1;
while(t--){
    ll n,i;
    s(n);
    ll ans=0;ll sum=0;
    for(i=0;i<n;i++) {
        s(a[i]);
        sum+=a[i];
        if(sum<0) {
           ans=ans-sum;
           sum=0;
        }
    }
    cout<<"Scenario #"<<j<<": ";
    p(ans+1);
    j++;
}



return 0;
}
