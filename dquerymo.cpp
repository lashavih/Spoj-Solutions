#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define BLOCK 555

using namespace std;

int vis[1000002], ans[200002], a[30002];

int sum=0;

struct node {
	int L, R, i;
}q[200002];

bool cmp(node x, node y) {
	if(x.L/BLOCK != y.L/BLOCK) {
		// different blocks, so sort by block.
		return x.L/BLOCK < y.L/BLOCK;
	}
	// same block, so sort by R value
	return x.R < y.R;
}


void add(int pos){
vis[a[pos]]++;
if(vis[a[pos]]==1) sum++;
}

void del(int pos){
vis[a[pos]]--;
if(vis[a[pos]]==0) sum--;
}

int main(){
int n;
si(n);
for(int i=1;i<=n;i++) si(a[i]);

int m;
si(m);
for(int i=0;i<m;i++){
    si(q[i].L);si(q[i].R);
    q[i].i=i;
}
sort(q,q+m,cmp);

for(int i=0;i<m;i++){
    cout<<q[i].L<<" "<<q[i].R<<endl;
}
int curl=1,curr=1;
for(int i=0;i<m;i++){
    int l=q[i].L;int r=q[i].R;

    while(curl<l){
        del(curl);
        curl++;
    }

    while(curl>l){
        add(curl-1);
        curl--;
    }

    while(curr<=r){
        add(curr);
        curr++;
    }

    while(curr>r+1){
        del(curr-1);
        curr--;
    }
    ans[q[i].i]=sum;
}

for(int i=0;i<m;i++){
    pi(ans[i]);
}

return 0;
}

