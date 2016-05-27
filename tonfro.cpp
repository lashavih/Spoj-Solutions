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
int i,n,j,k,temp,temp1;
char c[202];
while(1){
cin>>n;
if(n==0) break;
else{
    cin>>c;
   int l=strlen(c);
   int x=l/n;
    for(i=0;i<n;i++){
        cout<<c[i];
        temp=2*n-1-i;temp1=2*n+i;
        cout<<c[temp];cout<<c[temp1];
       while(temp<l-(n+1+i)){
        temp+=2*n;temp1+=2*n;
        cout<<c[temp];if(temp1<l){ cout<<c[temp1];}
       }
    }
    cout<<endl;
}
}
return 0;
}
