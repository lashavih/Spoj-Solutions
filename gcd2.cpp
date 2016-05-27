#include<bits/stdc++.h>

using namespace std;

char s[252];

int findmod(int a){
    int i;int d=0;
    for(i=0;i<strlen(s);i++){
       int x=s[i]-48;
       x+=10*d;
       d=x%a;
    }
    return d;
}
int gcd(int a, int b){
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(){
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    cin>>s;
    if(a==0) cout<<s<<endl;
    else{
    int b=findmod(a);
    cout<<gcd(a,b)<<endl;
    }
}


return 0;
}
