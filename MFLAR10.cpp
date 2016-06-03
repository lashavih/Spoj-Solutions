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
    string s;
    while(getline(cin, s) && s!="*"){
        char st=s[0];
        st=tolower(st);
        bool chk=true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==' '){
                if(st!=tolower(s[i+1])) {chk=false;break;}
            }
        }
        if(chk)   cout<<"Y\n";
        else      cout<<"N\n";
    }

return 0;
}
