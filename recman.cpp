#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int a[500002];
bool c[10000000];
void solve(){
a[0]=0;int i;
for(i=1;i<=500000;i++){
    int temp=a[i-1]-i;
    if(temp>0 && !c[temp]){
        a[i]=temp;
        c[temp]=true;
    }
    else {
        a[i]=a[i-1]+i;
        c[a[i]]=true;
    }
}
}

int main(){
solve();
while(1){
    int k;
    si(k);
    if(k==-1) break;
    pi(a[k]);
}


return 0;
}

