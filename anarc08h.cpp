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
while(1){
    int n,d,i;
    si(n);si(d);
    if(n==0 && d==0) break;
    int ans=0;
    for(i=2;i<=n;i++){
        ans=(ans+d)%i;
    }
    printf("%d %d %d\n",n,d,ans+1);
}

return 0;
}

