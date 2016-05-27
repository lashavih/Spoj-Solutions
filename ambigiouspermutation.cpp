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
int i,n,a[100002],b[100000];

while(1){
    cin>>n;
    if(n==0) break;
    else{
      for(i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]=i;
      }
      int cnt=0;
      for(i=1;i<=n;i++){
        if(a[i]==b[i]) cnt++;
      }
      if(cnt==n) cout<<"ambiguous"<<endl;
      else cout<<"not ambiguous"<<endl;

    }
}

return 0;
}
