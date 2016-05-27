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
while(1){
    int e,f,s,m,e1,f1,s1,m1,e2,f2,s2,m2;
    cin>>e>>f>>s>>m>>e1>>f1>>s1>>m1;
    if(e==-1) break;
    e2 = (int) ceil((float)e / (float)e1);
    f2 = (int) ceil((float)f / (float)f1);
    s2 = (int) ceil((float)s / (float)s1);
    m2 = (int) ceil((float)m / (float)m1);

    int maxv=max(e2,max(f2,max(s2,m2)));
    printf("%d %d %d %d\n", (maxv *e1)-e,(maxv*f1)-f,(maxv*s1)-s,(maxv*m1)-m);
}


return 0;
}
