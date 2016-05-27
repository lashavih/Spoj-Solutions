#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%lld",&x)
#define pi(x) printf("%d\n",x)

using namespace std;

int main(){
int n;
si(n);
if(n==0) cout<<0<<endl;
else{
int q=n;
string ans;
while(q!=0){
    if(n<0){
        if(n%2==0) q=-1*(abs(n)/2);
        else q=-1*((abs(n)+1)/2);
    }
    else q=n/2;
    if(n==2*q) ans="0"+ans;
    else ans="1"+ans;
    n=-1*q;
}
cout<<ans<<endl;
}
return 0;
}
