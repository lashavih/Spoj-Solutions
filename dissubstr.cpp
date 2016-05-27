#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int lcp(string x,string y){
    int cnt=0;
    int i=0;
    while(x[i]==y[i]){
        cnt++;
        i++;
    }
    return cnt;
}

char s[1002];
int main(){
int t;
si(t);
while(t--){
    scanf("%s",s);
    int n=strlen(s);
    int i,j;int ans=0;
    if(n==1) pi(ans+1);
    else{
    string a[1002];
    a[0]=s[n-1];
    j=1;
    for(i=n-2;i>=0;i--){
        a[j]=s[i]+a[j-1];
        j++;
    }
    sort(a,a+n);

    ans=a[0].size();
    for(i=0;i<n-1;i++){
            ans+=a[i+1].size()-lcp(a[i],a[i+1]);
    }
    pi(ans);
    }

}

return 0;
}
