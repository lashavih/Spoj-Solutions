#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64\n",x)

using namespace std;

int a[1000002];
int main(){
int t;
si(t);
while(t--){
    int n,i;
    si(n);
    map<int,int>m;
    map<int,int>:: iterator it;
    for(i=0;i<n;i++){
        si(a[i]);
        m[a[i]]++;
    }
    int flag=0;int ans=0;
    for(it=m.begin();it!=m.end();it++){
        int temp=it->second;
        if(temp>n/2){flag=1; ans=it->first; break;}
    }
    if(!flag) printf("NO\n");
    else{
        printf("YES ");
        pi(ans);
    }
}

return 0;
}
