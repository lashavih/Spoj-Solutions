#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",&x)
using namespace std;

int powr(int x,int y){
int ans=1;
for(int i=0;i<y;i++){
    ans*=x;
}
return ans;
}
int main(){
int t;
si(t);
while(t--){
    string s;
    cin>>s;int n=s.size();
    int temp=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.') {temp=i; break;}
    }
    int ans;
    if(temp==0) ans=1;
    else{
        int sum=0;int cnt=0;
        for(int i=temp+1;i<n;i++){
            sum+=(s[i]-48)*powr(10,n-1-i);
            cnt++;
        }
        int val=__gcd(sum,powr(10,cnt));
        ans=powr(10,cnt)/val;
    }
    pi(ans);
}

return 0;
}
