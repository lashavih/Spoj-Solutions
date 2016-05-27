#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
int t,i;
int  a[10002];
for(i=1;i<10002;i++){
    a[i]=i*(i+1)/2;
}
cin>>t;
while(t--){
    int n,temp,temp1,v1,v2;
    cin>>n;
    if(n==1 || n==0) cout<<"TERM"<<" "<<n<<" "<<"IS"<<" "<<n<<"/"<<n<<endl;
    else if(n==10000000) cout<<"TERM"<<" "<<n<<" "<<"IS"<<" "<<0<<"/"<<0<<endl;
    else{
    for(i=10002;i>=1;i--){
        if(a[i]<n){
            temp=i;
            temp1=n-a[i];
            //cout<<a[i]<<endl;
            break;
        }
    }
    if(temp%2!=0){
    v1=1;v2=temp+1;
    for(i=1;i<temp1;i++){
       v1++;
       v2--;
    }
    cout<<"TERM"<<" "<<n<<" "<<"IS"<<" "<<v1<<"/"<<v2<<endl;
    }
    else{
          v1=temp+1;v2=1;
    for(i=1;i<temp1;i++){
       v1--;
       v2++;
    }
    cout<<"TERM"<<" "<<n<<" "<<"IS"<<" "<<v1<<"/"<<v2<<endl;
    }
    }

}

return 0;
}
