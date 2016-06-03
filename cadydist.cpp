#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

ll c[100002],p[100002];
int main(){
ll n,i,j;
while(1){
s(n);
if(n==0) break;
else{
for(i=0;i<n;i++) s(c[i]);
for(i=0;i<n;i++) s(p[i]);

sort(c,c+n,greater<int>());
sort(p,p+n);

ll sum=0;
for(i=0;i<n;i++){
    sum+=c[i]*p[i];
}
p(sum);
}
}
return 0;
}
