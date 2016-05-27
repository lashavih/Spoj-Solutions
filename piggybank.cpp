#include<bits/stdc++.h>
#define MAX 1000002

using namespace std;

int main(){
int t,n,i,f,d,val,wt,j,e;
	int a[10002];
	cin>>t;
	while(t--){
		cin>>e>>f;
		d=f-e;
			for(j=0;j<10002;j++) a[j]=MAX;

		cin>>n;
		for(i=0;i<n;i++){
			cin>>val>>wt;

			if(a[wt]>val){
			a[wt]=val;
				for(j=wt+1;j<=d;j++){
					if(a[wt]+a[j-wt] < a[j]) a[j]=a[wt]+a[j-wt];
				}

			}
        }
			if(a[d]==MAX) cout<<"This is impossible."<<endl;
       else cout<<"The minimum amount of money in the piggy-bank is "<<a[d]<<"."<<endl;

  }


return 0;
}
