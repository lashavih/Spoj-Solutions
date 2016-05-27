#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64\n",x)

using namespace std;

 ll is_perfect_square(ll n){
      ll s=sqrt(n);
      if(s*s==n) return 1;
      else return 0;
}

int main(){
int t;
si(t);
while(t--){
    ll n,i;
    s(n);int flag=0;
    for(i=0;i*i<=n;i++){
        ll temp=n-i*i;
       if(is_perfect_square(temp)==1) {flag=1; break;}
    }
    if(flag) printf("Yes\n");
    else printf("No\n");
}
return 0;
}

