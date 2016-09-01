#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int bt[30002];
int n;
void updatetree(int index,int val){
    while(index<=n){
        bt[index]+=val;
        index+=(index & (-index));
    }
}

int getsum(int index){
int sum=0;
while(index>0){
    sum+=bt[index];
    index-=(index & (-index));
}
return sum;
}


int main(){
int t;
si(t);
while(t--){
    int i;si(n);
    memset(bt,0,sizeof(bt));
    map<string,int>m;
    vector< pair<int,int> >vec;
    for(i=1;i<=n;i++){
        string s;cin>>s;
        m[s]=i;
    }
    for(i=1;i<=n;i++){
        string s;cin>>s;
        int ind=m[s];
        vec.pb(mp(ind,i));
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    int ans=0;
    for(i=0;i<vec.size();i++){
        int ind=vec[i].second;
        ans+=getsum(ind);
        updatetree(ind,1);
    }
pi(ans);

}


return 0;
}

