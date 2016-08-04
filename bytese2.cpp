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
int t;
si(t);
while(t--){
    int n,i,j;si(n);
    vector< pair<int,int> >v;
    for(i=0;i<n;i++){
        int x,y;
        si(x);si(y);
        v.pb(mp(x,y));
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(i=0;i<n;i++){
        int cnt=0;
        for(j=0;j<n;j++){
            if(v[j].first<v[i].second && v[j].second>=v[i].second){
                cnt++;
            }
        }
        ans=max(ans,cnt);
    }
    pi(ans);
}


return 0;
}
