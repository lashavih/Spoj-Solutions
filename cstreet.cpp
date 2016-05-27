#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

ll n,ar[1002][1002];
bool chk[1002];
ll key[1002];
ll ans=0;

int minv(){
	int mini=INT_MAX,ind;
	for(int v=0;v<n;v++){
		if(chk[v]==false && key[v]<mini){
			mini=key[v];
			ind=v;
		}
	}
	return ind;
}

void mst(){
	for(int i=0;i<n;i++){
		key[i]=INT_MAX;
	}
	key[0]=0;
	for(int j=0;j<n;j++){
		int u=minv();
		ans+=key[u];
		chk[u]=true;
		for(int v=0;v<n;v++){
			if(ar[u][v] && chk[v]==false && ar[u][v]<key[v]){
				key[v]=ar[u][v];
			}
		}
	}
}

int main(){
	int t;
	si(t);
	while(t--){
		ans=0;
		memset(ar,0,sizeof(ar[0][0])*1002*1002);
		memset(chk,false,sizeof(chk));
		int p;
		si(p);s(n);
		ll m;
		s(m);
		while(m--){
			int a,b,c;
			si(a);si(b);si(c);
            ar[a-1][b-1]=c;
			ar[b-1][a-1]=c;
		}
		mst();
		p(ans*p);
	}
	return 0;
}
