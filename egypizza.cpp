#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define M 1000000007
#define ll long long int

using namespace std;

int main(){
int n,i;
cin>>n;
string s;int half=0;int onefourth=0;int threefourth=0;
for(i=0;i<n;i++){
    string s;
    cin>>s;
    if(s=="1/2") half++;
    else if(s=="1/4") onefourth++;
    else threefourth++;
}
int ans=threefourth;int flag=0;
onefourth-=min(threefourth,onefourth);
if(half==1) ans++;
else {
        ans+=half/2;

if(half%2!=0) half=1;
else half=0;

if(half>0){
        ans++;
if(onefourth>0) flag=1;
}
}

if(flag==1) {
    onefourth-=2;
    if(onefourth<0) onefourth=0;
}
    int val=onefourth/4;
    int val1=onefourth%4;
    ans+=val;
    if(val1>0) ans++;

cout<<ans+1<<endl;

return 0;
}
