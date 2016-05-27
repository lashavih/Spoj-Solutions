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
    string s;
    cin>>s;
    if(s=="00e0") break;
    int val=0;
    val+=(s[0]-48)*10+(s[1]-48);
    for(int i=1;i<=(s[3]-48);i++){
        val=val*10;
    }

    int ans=0;int tmp;
    for(int i=0;i<=32;i++){
        int temp=pow(2,i);
        if(temp==val) {ans=1; break;}
        else if(temp>val){
            tmp=temp-val;
            ans=val-(tmp-1);
            break;
        }
    }
    cout<<ans<<endl;
}


return 0;
}
