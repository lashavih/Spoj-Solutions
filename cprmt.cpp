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
    char a[1002],b[1002];
    while(scanf("%s",a)!=EOF){
    scanf("%s",b);
    map<char,int>m1;
    map<char,int>m2;
    int i;
    for(i=0;i<strlen(a);i++){
        m1[a[i]]++;
    }
    for(i=0;i<strlen(b);i++){
        m2[b[i]]++;
    }
    char j;
    for(j='a';j<='z';j++){
        if(m1[j] && m2[j]){
            for(i=0;i<min(m1[j],m2[j]);i++) cout<<j;
        }
    }
    cout<<endl;
    }
return 0;
}
