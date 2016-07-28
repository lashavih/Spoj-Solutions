#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define LSOne(S) (S&(-S))


using namespace std;
ll B1[100002], B2[100002];

int n;
ll query(ll* ft,ll b){
	ll sum=0;
	for (;b;b-=LSOne(b)) sum+=ft[b];
	return sum;
}

ll query(ll b){
    return query(B1,b)*b-query(B2,b);
}

ll range_query(ll i,ll j){
    return query(j)-query(i-1);
}

void update(ll* ft,ll k,ll v){
	for (;k<=n;k+=LSOne(k)) ft[k]+=v;
}

void range_update(ll i,ll j,ll v){
	update(B1,i,v);
	update(B1,j+1,-v);
	update(B2,i,v*(i-1));
	update(B2,j+1,-v*j);
}

int main()  {
    int t;
	si(t);
	while (t--)	{
        int c;
		s(n);si(c);
		memset(B1,0,sizeof(B1));
        memset(B2,0,sizeof(B2));
		while (c--){
		    int tc;ll l,r,v;
			si(tc);s(l);s(r);
			if (tc==0) {
                    s(v);
                    range_update(l,r,v);
			}
			 else p(range_query(l,r));
		}
	}
    return 0;
}
