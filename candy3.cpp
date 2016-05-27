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
int t,i;
cin>>t;
while(t--){
ll n,a,sum=0;
cin>>n;
for(i=0;i<n;i++){
   cin>>a;
   sum=(sum%n)+a%n;
   sum%=n;
}
if(sum%n==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
return 0;
}
