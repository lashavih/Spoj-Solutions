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
    int r,c;
    si(r);si(c);
    if(r==c){
        if(r%2==0) printf("L\n");
        else printf("R\n");
    }
    else if(r>c){
        if(c%2==0) printf("U\n");
        else printf("D\n");
    }
    else {
        if(r%2==0) printf("L\n");
        else printf("R\n");
    }
}


return 0;
}
