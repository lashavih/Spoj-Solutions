#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++) cin>>a[i];
int b[n];
for(i=0;i<n-1;i++){
    b[i]=abs(a[i+1]-a[i]);
}

int val=0;
for(i=0;i<n-1;i++){
    val=__gcd(val,b[i]);
}
int ans=0;
for(i=0;i<n-1;i++){
    ans+=(b[i]/val)-1;
}
cout<<ans<<endl;
return 0;
}
