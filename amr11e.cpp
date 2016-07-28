#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64d\n",x)

using namespace std;

int ans[1002];
int isp[2672];

int main(){
memset(ans,0,sizeof(ans));
memset(isp,0,sizeof(isp));
for(int i=2;i<2671;i++){
    if(!isp[i]){
        for(int j=2*i;j<2671;j+=i){
            isp[j]++;
        }
    }
}

int i,j;

for(i=30,j=0;(i<2671 && j<1001);i++){
    if(isp[i]>=3){
        ans[j++]=i;
    }
}
int t;
si(t);
while(t--){
   int n;
   si(n);
   pi(ans[n-1]);
}

return 0;
}
