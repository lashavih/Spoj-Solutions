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
    int h,a;
    si(h);si(a);
    h+=3;a+=2;
    int cnt=1;
    while(1){
        if(cnt%2==0) {
                h+=3;a+=2;cnt++;
        }
        else{
            if(h-5<=0) break;
            if(a-10<=0) {
                if(h-20>0) {
                    h-=20;a+=5;
                }
                else break;
            }
            else h-=5,a-=10;
            cnt++;
        }
    }
    pi(cnt);
}



return 0;
}
