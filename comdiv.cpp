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
    int n,m,i;
    si(n);si(m);int cnt=0;

    int x=gcd(n,m);
    for(i=1;i*i<=x;i++){
        if(x%i==0) {
            cnt++;
            if(x/i!=i) cnt++;
        }
    }
    pi(cnt);
}

return 0;
}
