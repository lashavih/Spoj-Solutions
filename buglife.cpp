#include<bits/stdc++.h>

using namespace std;

int main(){
int t,j;
cin>>t;
map<int,int>mp1;
map<int,int>mp2;
map<int,int>:: iterator it;
j=1;
while(t--){
    int n,m,i,a,b;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>a>>b;
        mp1[a]++;
        mp2[b]++;
    }
    int flag=0;
    for(it=mp1.begin();it!=mp1.end();it++){
        int val=it->first;
        if(mp2[val]) {flag=1; break;}
    }
     cout<<"Scenario #"<<j<<":"<<endl;
     if(flag){
        cout<<"Suspicious bugs found!"<<endl;
     }
     else cout<<"No suspicious bugs found!"<<endl;
    j++;
    mp1.clear();mp2.clear();
}

return 0;
}
