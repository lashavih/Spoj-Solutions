#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define M 1000000007

using namespace std;

ll a[100002],c,n;
ll f(ll x){
  ll placed=1,last=a[0];
  for(ll i=1;i<n;i++){
    if(a[i]-last>=x){
         placed++;
      if(placed==c) return 1;
      last=a[i];
    }
  }
  return 0;
}


int main(){
int t;
cin>>t;
while(t--){
    ll i;
    cin>>n>>c;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll ini=0,fin=a[n-1]-a[0]+1,mid;
while(fin-ini>1){
  mid=(ini+fin)>>1;
  (f(mid)?ini:fin)=mid;
}
cout<<ini<<endl;
}

return 0;
}
