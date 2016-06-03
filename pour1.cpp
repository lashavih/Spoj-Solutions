#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int gcd(int a, int b){
	if (b==0) return a;
	else return gcd(b,a%b);
}

int pour(int a,int b,int c){
int x=a,y=0,ans=1;int temp;
while(x!=c && y!=c){
    temp=min(x,b-y);
    y+=temp;
    x-=temp;
    ans++;
    if(x==c || y==c) break;
    if(x==0) x=a,ans++;
    if(y==b) y=0,ans++;
}
return ans;
}

int main(){
int t;
si(t);
while(t--){
    int a,b,c;
    si(a);si(b);si(c);
    if(c>max(a,b)) printf("-1\n");
    else if(c%gcd(a,b)!=0) printf("-1\n");
    else if(c==a || c==b) printf("1\n");
    else pi(min(pour(a,b,c),pour(b,a,c)));
}


return 0;
}
