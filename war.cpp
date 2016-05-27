#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 998244353
#define ll long long int

using namespace std;

char a[100002],b[32];
int main(){
cin>>a;
cin>>b;
int l1=strlen(a);int l2=strlen(b);
int i,j,cnt=0,flag;
for(i=0;i<l1;i++){
    if(a[i]==b[0]){
            flag=0;
        for(j=1;j<l2;j++){
            if(a[i+j]!=b[j]){
                flag=1;
                break;
            }
        }
    if(!flag){ cnt++; a[i+l2-1]='#';}
    }
}

cout<<cnt<<endl;
return 0;
}
