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
int i,n,a[10002];
while(1){
cin>>n;
if(n<0) break;
else{
     int sum=0,cnt=0,cnt1=0;
  for(i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
if(sum%n!=0) cout<<-1<<endl;
else{
    sum/=n;
for(i=0;i<n;i++){
    if(a[i]<sum) cnt+=(sum-a[i]);
    else if(a[i]>sum) cnt1+=(a[i]-sum);
}
if(cnt==cnt1) cout<<cnt<<endl;
}
}
}
return 0;
}
