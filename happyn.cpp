#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;
ll cnt=0;
ll sum;
ll solve(ll x){
sum=0;ll r;
while(x>0){
    r=x%10;
    sum=sum+pow(r,2);
    x=x/10;
}
if(sum>10){
        cnt++;
    return solve(sum);
}
else{
    cnt++;
    return cnt;
    }
}
int main(){
ll n;
cin>>n;
ll ans=solve(n);
if(sum==1 || sum==10){
    if(sum==1) cout<<ans<<endl;
    else cout<<ans+1<<endl;
}
else cout<<-1<<endl;
return 0;
}
