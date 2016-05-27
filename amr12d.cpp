#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int main(){
int t;
si(t);
while(t--){
  char c[12];
  scanf("%s",c);
  int n=strlen(c);int i,j;
  map<string,int>m;
  vector<string>v;
  for(i=0;i<n;i++){
        string s;
    for(j=i;j<n;j++){
        s=s+c[j];
        m[s]++;
        string x=s;
        reverse(x.begin(),x.end());
        v.pb(x);
    }
  }
  int flag=0;
  for(i=0;i<v.size();i++){
    if(!m[v[i]]) {flag=1; break;}
  }
  if(flag) printf("NO\n");
  else printf("YES\n");
}

return 0;
}
