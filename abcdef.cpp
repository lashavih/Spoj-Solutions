#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

ll a[102],b[1000002],c[1000002],d[1000002],e[1000002];
int main(){
ll n,i,j,k;
s(n);
for(i=1;i<=n;i++) s(a[i]);

ll sum=0;
ll x=0,y=0;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        for(k=1;k<=n;k++){
            ll temp1=a[i]*a[j]+a[k];
            b[x++]=temp1;
        }
    }
}

for(i=1;i<=n;i++){
        if(a[i]!=0){
    for(j=1;j<=n;j++){
        for(k=1;k<=n;k++){
            ll temp2=(a[j]+a[k])*a[i];
            c[y++]=temp2;
            }
        }
    }
}

    sort(b,b+x);
    sort(c,c+y);

    ll n1=1,m1=1;
    d[0] =e[0] = 1;

    for(i=1;i<x;i++){
        if(b[i]!=b[n1-1]){
            b[n1] = b[i];
            d[n1] = 1;
            n1++;
        }
        else d[n1-1]++;
    }

    for(i=1;i<y;i++){
        if(c[i]!=c[m1-1]){
            c[m1] = c[i];
            e[m1] = 1;
            m1++;
        }
        else e[m1-1]++;
    }


    for(i=0,j=0;i<n1 && j<m1;){
        if(b[i]==c[j]) sum += d[i]*e[j];

        if(b[i]>c[j]) j++;
        else if(b[i]<c[j]) i++;
        else{
            i++;
            j++;
        }
    }


p(sum);

return 0;
}
