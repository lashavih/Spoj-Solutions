#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)

using namespace std;

int bt[300002], p[1000002], ans[300002], a[300002];
pair <int, pair<int, int> > pr[300002];
int n;
void update(int index,int val){
    while(index<=n){
        bt[index]+=val;
        index+=(index & -index);
    }
}

int getsum(int index){
    int sum=0;
    while(index>0){
        sum+=bt[index];
        index-=(index & -index);
    }
    return sum;
}

int main(){
    si(n);
    for(int i=1;i<=n;i++) si(a[i]);

    int q;
    si(q);
    for(int i=0;i<q;i++){
        si(pr[i].second.first);si(pr[i].first);
        pr[i].second.second=i;
    }
    sort(pr,pr+q);

    memset(p,-1,sizeof(p));
    memset(bt,0,sizeof(bt));

    int x=0;
    for(int i=1;i<=n;i++){
        if(p[a[i]]!=-1) update(p[a[i]],-1);
        p[a[i]]=i;
        update(i,1);
        while(x<q && pr[x].first==i){
            ans[pr[x].second.second]=getsum(pr[x].first)-getsum(pr[x].second.first-1);
            x++;
        }
    }
    for(int i=0;i<q;i++) pi(ans[i]);

    return 0;
}

