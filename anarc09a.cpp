#include<bits/stdc++.h>

using namespace std;

int main(){
int t=1;
while(1){
    string s;int flag=0;
    cin>>s;
    if(s[0]=='-') break;
    int i=0;int cnt=0;int top=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='{') top++;
        else if(s[i]=='}' && top==0)  {
            cnt++;
            top++;
        }
        else top--;
    }
    cout<<t<<". "<<(top)/2+cnt<<endl;
    t++;

}
return 0;
}
