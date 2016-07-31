#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

bool chk[1000002];
int ans[1000002];
void pre(){
for(int i=2;i<=100;i++){
    int temp=i*i*i;
    if(!chk[temp]){
        for(int j=temp;j<=1000000;j+=temp){
            chk[j]=true;
        }
    }
}
int val=1;
for(int i=1;i<=1000000;i++){
    if(!chk[i]) ans[i]=val;
    val++;
    if(chk[i]) val--;
}
}

int main(){
memset(chk,false,sizeof(chk));
memset(ans,0,sizeof(ans));
pre();
int t,tc,i,j;
si(t);
for(tc=1;tc<=t;tc++){
    int n;
    cin>>n;
    if(chk[n]) {
        cout<<"Case "<<tc<<": "<<"Not Cube Free"<<endl;
    }
    else{
        cout<<"Case "<<tc<<": "<<ans[n]<<endl;
    }
}

return 0;
}
