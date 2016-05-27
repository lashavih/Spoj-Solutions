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
ll n;
cin>>n;
if(n%10==0) cout<<2<<endl;
else{
    cout<<1<<endl;
    cout<<n%10<<endl;
}
return 0;
}
