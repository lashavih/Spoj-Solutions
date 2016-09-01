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
    int n,b,i,j;
    si(n);si(b);
    ll a[n];
    for(i=0;i<n;i++) s(a[i]);
    ll p=0,x=0,h=0,ans=INT_MAX,cnt=0;
    for(i=0;i<n;i++){
        if(b>=x+a[i]){
          x+=a[i];h++;
        }
        else{
            x+=a[i];
            h++;
            while(x>b){
                x-=a[p];
                h--;p++;
            }
        }
        if(cnt<h){
            cnt=h;ans=x;
         }
         else if(cnt==h){
            ans=min(ans,x);
         }

    }
    printf("%lld %lld\n",ans,cnt);
}
return 0;
}
