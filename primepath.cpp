#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64\n",x)

using namespace std;

int check[100002];
void sieve(){
    for(int i=2;i<=100;i++){
        if(!check[i]){
            for(int j=i*i;j<=10000;j+=i)
                check[j] = true;
        }
    }
}

int conv_num(int a[]){
    int temp=0,k=0;
    while(k<4){
        temp = temp*10 + a[k];
        k++;
    }
    return temp;
}

void solve(int a[],int num){
    int x=3;
    while(num){
        a[x--] = num%10;
        num/=10;
    }
}

int val[10002];
int main(){
    int t;
    si(t);
    sieve();
    while(t--){
        int digit[4],a,b;
        si(a);si(b);
        memset(val,-1,sizeof(val));
        queue<int>q;
        val[a]=0;
        q.push(a);
        while(!q.empty()){
            int num = q.front();
            for(int k=3;k>=0;k--){
                solve(digit,num);
                for(int i=0;i<=9;i++){
                    digit[k] = i;
                    int temp = conv_num(digit);
                    if((!check[temp]) && val[temp]==-1 && temp>=1000) {
                        val[temp]= val[num] + 1;
                        q.push(temp);
                    }
                }
            }
            q.pop();
        }
        if(val[b]==-1) printf("Impossible\n");
        else pi(val[b]);
    }
    return 0;
}

