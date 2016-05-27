#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int gcd(int a, int b){
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}


int main(){
int t;
si(t);
while(t--){
   int a,b;
   si(a);si(b);
   int temp=gcd(a,b);
   int x=b/temp;int y=a/temp;
   printf("%d %d\n",x,y);
}


return 0;
}
