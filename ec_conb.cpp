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
int n,i,j;
si(n);
int a[n];
for(i=0;i<n;i++){
    si(a[i]);
}

for(i=0;i<n;i++){
    if(a[i]%2==0){
        int temp=0;int x=a[i];
        while (x!=0){
			temp=temp<<1;
			temp=temp+(x&1);
			x=x>>1;
		}
		a[i]=temp;
    }
}
for(i=0;i<n;i++){
    pi(a[i]);
}

return 0;
}
