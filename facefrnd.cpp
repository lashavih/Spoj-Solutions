#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int

using namespace std;

string frnd[102];
int main(){
int n,i,j,m;
cin>>n;
map<string,int>ab;
vector<string>v[n];
string mf;
for(i=0;i<n;i++){
    cin>>frnd[i]>>m;
    ab[frnd[i]]++;
    for(j=0;j<m;j++){
        cin>>mf;
        v[i].pb(mf);
    }
}
int cnt=0;
for(i=0;i<n;i++){
    for(j=0;j<v[i].size();j++){
        if(!ab[v[i][j]]) {
            ab[v[i][j]]++;
            cnt++;
        }
    }
}

cout<<cnt<<endl;

return 0;
}
