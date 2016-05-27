#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int

using namespace std;

ll a[20002];
int main(){
int t;
cin>>t;
while(t--){
    ll n,k,i;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    if(k==1) cout<<0<<endl;
    else{
        sort(a+1,a+n+1);
        int temp1=a[k]-a[1];int temp2;
        for(i=1;i<=n-k;i++){
            temp2=a[i+k]-a[i+1];
            if(temp2<temp1) temp1=temp2;
        }
        cout<<temp1<<endl;
    }
}

return 0;
}
