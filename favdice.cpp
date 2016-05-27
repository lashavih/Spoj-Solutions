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
    int n,i;
    si(n);
    float sum=0.0;
   for(i=n;i>=1;i--){
    sum+=(float)n/(float)i;
   }
   printf("%0.2f\n",sum);
}


return 0;
}
