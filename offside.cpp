#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000007
#define ll long long int

using namespace std;

int main(){
while(1){
    int a,d;
    cin>>a>>d;
    if(!a && !d) break;
    else{
        int a1[a+1];int d1[d+1];
        int i,j;
        for(i=1;i<=a;i++) cin>>a1[i];

        for(i=1;i<=d;i++) cin>>d1[i];

        int flag=0;
       sort(a1+1,a1+a+1);sort(d1+1,d1+d+1);
       for(i=1;i<=a;i++){
           if(a1[i]<d1[2]){ flag=1; break;}
       }

       if(flag) cout<<"Y"<<endl;
       else cout<<"N"<<endl;

    }
}
return 0;
}
