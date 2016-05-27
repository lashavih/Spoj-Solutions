#include <iostream>
using namespace std;
int a[102][102],i,j,n,c,k,d;
int main(){
    cin>>t;
    while(t--){
            cin>>n;c=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++){
            cin>>a[i][j];
            d=a[i][j];
            a[i][j]=max(a[i-1][j],a[i-1][j-1])+d;
            c=max(a[i][j],c);
            }
            cout<<c<<endl;
    }
    return 0;
}
