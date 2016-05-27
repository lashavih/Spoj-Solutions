#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64\n",x)

using namespace std;

int a[1002],b[1002];
int main(){
int t;
si(t);
while(t--){
    int n,m,i,j;
    si(n);
    for(i=0;i<n;i++) si(a[i]);
    si(m);
    for(i=0;i<m;i++) si(b[i]);

    int ans=INT_MAX;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(a[i]-b[j])<ans) ans=abs(a[i]-b[j]);
        }
    }
    pi(ans);
}

return 0;
}
