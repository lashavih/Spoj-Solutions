#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,m,d,i,j;
    cin>>n>>m>>d;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());

    int cnt=0;int temp=a[0];int ind=0;
    while(cnt<m){
        temp=temp-d;
        if(temp>0) cnt++;
        else {
            ind++;
            if(a[ind]-d<0) break;
            else temp=a[ind];
        }
    }
    if(cnt==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

return 0;
}
