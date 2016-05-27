#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;

int main(){
while(1){
    int n,m;
    cin>>n>>m;
    if(n==-1 && m==-1) break;
    else{
        if(n==0) cout<<m<<endl;
        else if(m==0) cout<<n<<endl;
        else{
        int mnv=min(n,m);
        int mxv=max(n,m);
        if(mxv==mnv) cout<<1<<endl;
        else{
            mnv++;
            if(mxv%mnv==0) cout<<mxv/mnv<<endl;
            else {
                cout<<(mxv/mnv)+1<<endl;
            }
        }

        }
    }
}

return 0;
}
