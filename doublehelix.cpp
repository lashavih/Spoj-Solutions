#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

int a[10002],b[10002],m,n;
int suma[10002],sumb[10002];

int binary(int val){
 int low=0,high=m-1,mid;

 while(low<=high){
  mid=(low+high)/2;
  if(b[mid]==val){
   return mid;
  }
  else{
   if(b[mid]>val)
   high=mid-1;
   else
   low=mid+1;
  }
 }
 return -1;
}


int main(){
    while(1){
 cin>>n;
 if(n==0) break;
 else{
  int i,sum=0;
  for(i=0;i<n;i++){
   cin>>a[i];
   sum+=a[i];
   suma[i]=sum;
  }
    cin>>m;
  sum=0;
  for(i=0;i<m;i++)
  {
   cin>>b[i];
   sum+=b[i];
   sumb[i]=sum;
  }

  int temp1=0,temp2=0,n1=0,n2=0,x,y=0;
  int s1,s2,ans=0;

  for(i=0;i<n;i++){
   x=binary(a[i]);
   if(x>=0){
    y++;
    n2=x;
    n1=i;
    if(y==1)
    {
     s1=suma[n1];
     s2=sumb[n2];
    }
    else
    {
     s1=suma[n1]-suma[temp1];
     s2=sumb[n2]-sumb[temp2];
    }
    ans+=max(s1,s2);
    temp1=n1;
    temp2=n2;
   }
  }
  if(y>0)
  {
  s1=suma[n-1]-suma[temp1];
  s2=sumb[m-1]-sumb[temp2];
    }
    else
    {
   s1=suma[n-1];
   s2=sumb[m-1];
    }
  ans+=max(s1,s2);
  cout<<ans<<endl;

 }
 }
 return 0;
}
