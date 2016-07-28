#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64d\n",x)

using namespace std;

#define MAXN 1000002


int A[50002];
struct entry {
	int a[4];
} M[MAXN],M1[MAXN];

void buildtree(int node,int b,int e){
if(b==e){
    M[node].a[0]=A[b];//max left sum
    M[node].a[1]=A[b];//max right sum
    M[node].a[2]=A[b];//sum of left and right
    M[node].a[3]=A[b];//best sum

}

else{
 buildtree(2*node,b,(b+e)/2);
 buildtree(2*node+1,(b+e)/2+1,e);
 int x,y,sum;
 x=2*node; y=2*node+1;
          M[node].a[0]=max(M[x].a[0],M[y].a[0]+M[x].a[2]);
          M[node].a[1]=max(M[y].a[1],M[y].a[2]+M[x].a[1]);
          M[node].a[2]=M[x].a[2]+M[y].a[2];
          int maxv=M[x].a[1]+M[y].a[0];
          for(int i=0;i<3;i++){
             if(M[node].a[i]>maxv) maxv=M[node].a[i];
          }
          M[node].a[3]=max(maxv,max(M[x].a[3],M[y].a[3]));
   }
}

int query(int node,int b,int e,int i,int j){
if(e<i || b>j) return -1;
if(b>=i && e<=j){
for(int i=0;i<4;i++)
    M1[node].a[i]=M[node].a[i];
 return 1;
}
int p1=query(2*node,b,(b+e)/2,i,j);
int p2=query(2*node+1,(b+e)/2+1,e,i,j);
//cout<<node<<" "<<p1<<" "<<p2<<"\n" ;

   if(p1==-1){
          int y=2*node+1;
          M1[node].a[0]=M1[y].a[0];
          M1[node].a[1]=M1[y].a[1];
          M1[node].a[2]=M1[y].a[2];

          int maxv=M1[y].a[3];
             for(int i=0;i<3;i++){
                if(M1[node].a[i]>maxv) maxv=M1[node].a[i];
             }
          M1[node].a[3]=maxv;
            return 1;
          }

      else if(p2==-1){
           int y=2*node;

          M1[node].a[0]=M1[y].a[0];
          M1[node].a[1]=M1[y].a[1];
          M1[node].a[2]=M1[y].a[2];

          int maxv=M1[y].a[3];
             for(int i=0;i<3;i++){
                 if(M1[node].a[i]>maxv) maxv=M1[node].a[i];
             }
           M1[node].a[3]=maxv;
            return 1;
      }
        else{
         int x,y,sum;
         x=2*node; y=2*node+1;
         M1[node].a[0]=max(M1[x].a[0],M1[y].a[0]+M1[x].a[2]);
         M1[node].a[1]=max(M1[y].a[1],M1[y].a[2]+M1[x].a[1]);
         M1[node].a[2]=M1[x].a[2]+M1[y].a[2];
         int maxv=(M1[x].a[1]+M1[y].a[0]);
         for(int i=0;i<3;i++){
            if(M1[node].a[i]>maxv) maxv=M1[node].a[i];
         }
            M1[node].a[3]=max(maxv,max(M1[x].a[3],M1[y].a[3]));
          return 1;
        }
}

void update( int node,int b,int e,int pos,int val ) {
    if (b==e && e==pos) {
        M[node].a[0]=val;//max left sum
        M[node].a[1]=val;//max right sum
        M[node].a[2]=val;//sum of left and right
        M[node].a[3]=val;//best sum
        return;
    }
    if (pos<=(b+e)/2){
        update(node*2,b,(b+e)/2,pos,val);
    }
    if (pos>(b+e)/2){
        update(node*2+1,(b+e)/2+1,e,pos,val );
    }
    int x,y,sum;
    x=2*node; y=2*node+1;
          M[node].a[0]=max(M[x].a[0],M[y].a[0]+M[x].a[2]);
          M[node].a[1]=max(M[y].a[1],M[y].a[2]+M[x].a[1]);
          M[node].a[2]=M[x].a[2]+M[y].a[2];
          int maxv=M[x].a[1]+M[y].a[0];
          for(int i=0;i<3;i++){
             if(M[node].a[i]>maxv) maxv=M[node].a[i];
          }
          M[node].a[3]=max(maxv,max(M[x].a[3],M[y].a[3]));
}

int main(){
   int n,i,j,q;
   si(n);
   for(int k=0;k<n;k++) si(A[k]);
   buildtree(1,0,n-1);
   si(q);
   while(q--){
        int tc;
        si(tc);
        if(tc==0){
              int x,y;
              si(x);si(y);
            update(1,0,n-1,x-1,y);
        }
        else{
           si(i);si(j);
         int ans=query(1,0,n-1,i-1,j-1);
        pi(M1[1].a[3]);
    }
   }
    return 0;
}

