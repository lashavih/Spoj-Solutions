#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64\n",x)

using namespace std;

int main(){
while(1){
    int n;
    si(n);
    if(!n) break;
    else{
            int ans=0;
       for(int i=0;i<32;i++){
        if(pow(2,i)>n) {ans=i;break;}
       }
    pi(ans-1);
    }
}


return 0;
}
