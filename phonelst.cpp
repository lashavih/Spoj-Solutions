#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

string a[10002];
int main(){
int t;
si(t);
while(t--){
    int n,i,j;
    si(n);
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int flag=0;
    for(i=0;i<n-1;i++){
            string temp1=a[i];string temp2=a[i+1];int cnt=0;
        for(j=0;j<temp1.size();j++){
            if(temp1[j]==temp2[j])  cnt++;
            else break;
        }
        if(cnt==temp1.size()) {flag=1 ; break;}
    }
    if(flag) printf("NO\n");
    else printf("YES\n");

}


return 0;
}
