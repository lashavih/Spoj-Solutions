#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)

using namespace std;

int x[16000002],y[16000002];
int it1,it2;

int bsearch(int val){
int low=0;int hi=it1;
int mid;int temp=0;int ans=0;int itr=100;
while(low<=hi && itr){
        itr--;
    mid=(hi+low)/2;
    if(x[mid]==val){
        temp=mid-1;
        while(mid<it1 && x[mid]==val){
            mid++;
            ans++;
        }
        while(temp>=0 && x[temp]==val){
            temp--;
            ans++;
        }
        return ans;
    }
    else if(x[mid]>val){
        hi=mid-1;
    }
    else low=mid+1;
}
return 0;
}

int main(){
int n,i,j;
si(n);
int a[n],b[n],c[n],d[n];
for(i=0;i<n;i++){
    si(a[i]);si(b[i]);si(c[i]);si(d[i]);
}

it1=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        x[it1++]=a[i]+b[j];
    }
}
sort(x,x+it1);

it2=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        int temp=c[i]+d[j];
        temp=-temp;
        y[it2++]=temp;
    }
}

ll ans=0;int size2,temp;
 sort(y,y+it2);
        int size1;
        for(i=0;i<it2;){
             size1=0;
             temp=y[i];
             while(y[i]==temp && i<it2)
		     {
                   size1++;
                   i++;
		     }
            size2=bsearch(temp);
            ans+=size1*size2;
}
pi(ans);

return 0;
}
