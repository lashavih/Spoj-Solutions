#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[300002];
int main(){
ll n,m,i,j;
cin>>n>>m;
for(i=0;i<n;i++) cin>>a[i];
ll sum=0;ll flag=0;j=0;ll ans=0;
for(i=0;i<n;i++){
    sum+=a[i];
    if(sum==m) {ans=sum;break;}
    else if(sum>m){
        while(sum>m){
            sum-=a[j];
            j++;
            if(ans<=sum && sum<=m) {
                ans=sum;break;
            }
        }
    }
     if(ans<=sum && sum<=m) {
        ans=sum;
    }
}
cout<<ans<<endl;

return 0;
}
