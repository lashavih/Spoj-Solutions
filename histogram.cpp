#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

ll hist[100002];
ll getMaxArea(ll n){
    stack<ll> s;

    ll max_area=0;
    ll tp;
    ll area_with_top;

    ll i=0;
    while (i<n){
        if (s.empty() || hist[s.top()]<=hist[i])
            s.push(i++);
        else{
            tp=s.top();
            s.pop();
            area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);

            if (max_area<area_with_top)
                max_area=area_with_top;
        }
    }

    while (!s.empty()){
        tp=s.top();
        s.pop();
        area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);

        if (max_area<area_with_top)
            max_area=area_with_top;
    }

    return max_area;
}

int main(){
  ll n,i;
  while(1){
  s(n);
  if(!n) break;
  else{
  for(i=0;i<n;i++){
   s(hist[i]);
  }
   p(getMaxArea(n));
  }
  }
return 0;
}


