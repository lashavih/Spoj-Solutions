#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000007
#define ll long long int

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll ans=3*n*(n+1)/2;
    ans-=n;
    cout<<ans%M<<endl;
}

return 0;
}
