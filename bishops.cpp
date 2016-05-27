#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define gc getchar
#define ll long long

using namespace std;
int a[2002],b[2002];
int main(){
int n,i,j;
cin>>n;
int x,y;
for(i=0;i<n;i++){
    cin>>x>>y;
    a[x+y]++;
    b[x-y+1000]++;
}
ll sum=0;
for(i=0;i<2002;i++){
    sum+=(a[i]*(a[i]-1)+b[i]*(b[i]-1));
}
sum/=2;
cout<<sum<<endl;
return 0;
}
