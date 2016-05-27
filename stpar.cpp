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

vector<int>v;
int main(){
while(1){
    int n,i,j;
    cin>>n;
    if(!n) break;
    else{
       int flag=0;
       int a[n+1],b[n+1];
       for(i=0;i<=n;i++) b[i]=0;
       a[0]=0;
       for(i=1;i<=n;i++) cin>>a[i];
       int temp=1;int cnt=0;
       for(i=1;i<=n;i++) {
            if(a[i]==temp){
                cnt++;
                b[temp]=1;
                temp++;
            }
            else{
                  int chk=0;
                if(v.size()>0 && v[v.size()-1]==temp){
                   while(!chk){
                    if(v[v.size()-1]==temp){
                            v.pop_back();
                            temp++;
                            if(v.size()==0){chk=1;}
                    }
                    else{chk=1;}
                   }
               }
            v.push_back(a[i]);
            }
       }

       for(i=v.size()-1;i>=0;i--){
        if(b[v[i]]==0){
            if(v[i]==temp){
                temp++;
                cnt++;
            }
            else {
                flag=1;
                break;
            }
        }
       }
       if(flag) cout<<"no"<<endl;
       else cout<<"yes"<<endl;

       v.clear();
    }
}

return 0;
}
