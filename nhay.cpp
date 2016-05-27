#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

ll n,i,j;
while(scanf("%d",&n)!=EOF){
string s1,s2;
cin>>s1;
cin>>s2;
if(n<=s2.size()){
        char tmp=s1[0];int uf=0;i=0;
    for(i=0;i<s2.size();i++){
        if(s2[i]==tmp && (s2.size()-i)>=s1.size()){
            int flag=0;
            for(j=0;j<s1.size();j++){
                if(s1[j]!=s2[i+j]) {flag=1; break;}
            }
        if(!flag){ cout<<i<<endl;}
        }
    }
}
}
return 0;
}
