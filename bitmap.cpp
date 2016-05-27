#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int a[184][184];
int n,m;
int bfs(int i,int j){
	queue<int> q;
	q.push(i);
	q.push(j);

	a[i][j]=0;

	while(!q.empty()){
		int x= q.front();
		q.pop();
		int y= q.front();
		q.pop();

		int dist= a[x][y]+1;
		if(y-1>=0 && dist < a[x][y-1]){
			q.push(x);
			q.push(y-1);
			a[x][y-1]=dist;
		}

		if(y+1<n && dist < a[x][y+1]){
			q.push(x);
			q.push(y+1);
			a[x][y+1]= dist;
		}

		if(x-1>=0 && dist < a[x-1][y]){
			q.push(x-1);
			q.push(y);
			a[x-1][y]= dist;
		}

		if(x+1<m && dist < a[x+1][y]){
			q.push(x+1);
			q.push(y);
			a[x+1][y]= dist;
		}
	}
}

int main(){
	int t;
	cin>>t;

	while(t--){
		vector< pair<int,int> > v;
		cin>>m>>n;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++){
				char ch;
				cin>>ch;
				if(ch=='1'){
					a[i][j]= -1000;
					v.push_back(make_pair(i,j));
				}
				else  a[i][j]=1000;

			}
		for(int i=0;i<v.size();i++)
			bfs(v[i].first,v[i].second);

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
