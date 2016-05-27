#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)

using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};
int main(){
int t;
si(t);
while(t--){
    int n,i,x,y;
    si(n);
    vector< pair<int,int> >act;
    for(i=0;i<n;i++){
        si(x);si(y);
        act.pb(mp(x,y));
    }
    int temp=-1,cnt=0;
    sort(act.begin(),act.end(),sort_pred());
    for(i=0;i<n;i++){
			if(act[i].first>=temp){
				cnt+= 1;
				temp= act[i].second;
			}
		}
    pi(cnt);
}

return 0;
}
