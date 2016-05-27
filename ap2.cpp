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

int main(){
int t;
cin>>t;
while(t--){
    ll x,y,z,n,a,d,i;
    cin>>x>>y>>z;
    n=(2*z)/(x+y);
    ll ar[n+1];
    ar[0]=0;
    a=((n-3)*x-2*y)/(n-5);
    d=(y-x)/(n-5);
    cout<<n<<endl;
    for(i=1;i<=n;i++){
        ar[i]=a+(i-1)*d;
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

return 0;
}
