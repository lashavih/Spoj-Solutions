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
int n,k;
si(n);si(k);
int a[n];
int i,j;
for(i=0;i<n;i++) si(a[i]);
sort(a,a+n);

ll cnt=0;
for(i=0;i<n-1;i++){
    for(j=i+1;(j<n && (a[j]-a[i])<=k);j++){
       if(a[j]-a[i]==k) cnt++;
    }
}

p(cnt);
return 0;
}
