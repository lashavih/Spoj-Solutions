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
    int n,i;si(n);
    if(n==0) break;
    else{
        int a[n];int ans=0;
        for(i=0;i<n;i++) si(a[i]);
        sort(a,a+n);
        for(i=n-1;i>=2;i--){
           int l=0,r=i-1;
           while(l<r){
               if(a[l]+a[r]<a[i]){
                ans+=(r-l);
                l++;
               }
            else r--;
           }
        }
        pi(ans);
    }
}


return 0;
}
