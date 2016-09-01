#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int ar[36];
void gensub(int l,int r,vector<int>& vec){
for(int i=0;i<(1<<r);i++){
    int sum=0;
    for(int j=0;j<r;j++){
        if(i&(1<<j)) sum+=ar[j+l];
    }
    vec.pb(sum);
}
}

int main(){
int n,a,b,i;
si(n);si(a);si(b);
vector<int> left,right;
for(i=0;i<n;i++) si(ar[i]);
gensub(0,n/2,left);
gensub(n/2,n&1?n/2+1:n/2,right);
ll ans=0;
vector<int>::iterator low,high;

sort(right.begin(),right.end());
for(i=0;i<left.size();i++){
    low=lower_bound(right.begin(),right.end(),a-left[i]);
    high=upper_bound(right.begin(),right.end(),b-left[i]);
    ans+=(high-right.begin())-(low-right.begin());
}
p(ans);

return 0;
}
