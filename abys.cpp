#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include <ctype.h>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;


bool isalpa(string x){
    int flag=0;
for(int i=0;i<x.size();i++){
    if(isalpha(x[i])){ flag=1; break;}
}
return flag;
}

int main(){
int t;
cin>>t;
while(t--){
    string a[5];int i;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    if(isalpa(a[0])){
        string temp1=a[2];
        string temp2=a[4];
        ll sum1=0;ll sum2=0;
        for(i=0;i<temp1.size();i++){
            sum1+=(temp1[i]-48)*pow(10,temp1.size()-i-1);
        }
        for(i=0;i<temp2.size();i++){
            sum2+=(temp2[i]-48)*pow(10,temp2.size()-i-1);
        }
        ll ans=sum2-sum1;
        cout<<ans<<" ";
        for(i=1;i<5;i++) cout<<a[i]<<" ";

        cout<<endl;
    }
   else if(isalpa(a[2])){
        string temp1=a[0];
        string temp2=a[4];
        ll sum1=0;ll sum2=0;
        for(i=0;i<temp1.size();i++){
            sum1+=(temp1[i]-48)*pow(10,temp1.size()-i-1);
        }
        for(i=0;i<temp2.size();i++){
            sum2+=(temp2[i]-48)*pow(10,temp2.size()-i-1);
        }
        ll ans=sum2-sum1;
        for(i=0;i<5;i++){
            if(i==2) cout<<ans<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else if(isalpa(a[4])){
        string temp1=a[0];
        string temp2=a[2];
        ll sum1=0;ll sum2=0;
        for(i=0;i<temp1.size();i++){
            sum1+=(temp1[i]-48)*pow(10,temp1.size()-i-1);
        }
        for(i=0;i<temp2.size();i++){
            sum2+=(temp2[i]-48)*pow(10,temp2.size()-i-1);
        }
        ll ans=sum2+sum1;

        for(i=0;i<5;i++){
            if(i==4) cout<<ans<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;

    }

}

return 0;
}
