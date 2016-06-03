#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define M 1000000007

using namespace std;
#define For(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define Fill(a,b) memset(&a,b,sizeof(a))

const int dr[]={0,0,1,-1};
const int dc[]={1,-1,0,0};

int cols, rows, maxd, maxr, maxc;
char s[1002][1002], v[1002][1002];

void dfs(int r, int c, int l){
	if (l > maxd) {maxd=l; maxr=r; maxc=c;}
	v[r][c]=1;
	For(i,0,3) if (r+dr[i]>=0 && r+dr[i]<rows && c+dc[i]>=0 && c+dc[i]<cols && v[r+dr[i]][c+dc[i]]==0 && s[r+dr[i]][c+dc[i]]=='.')
		dfs(r+dr[i],c+dc[i],l+1);
}

int main(){
	int t;
	si(t);

	For(z,1,t) {
	    int x,y;
		scanf("%d%d\n",&cols,&rows);
		For(j,1,rows) gets(s[j-1]);
		For(i,0,rows-1) For(j,0,cols-1) if (s[i][j]=='.') {
			x=i;y=j;break;
		}
        maxd=-1; Fill(v,0);
			dfs(x,y,0);

			maxd=-1; Fill(v,0);
			dfs(maxr,maxc,0);

			printf("Maximum rope length is %d.\n",maxd);
	}

	return 0;
}
