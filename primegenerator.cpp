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
#define gc getchar

using namespace std;

int isPrime(int n){
    int prime = 1;
    if(n==1) return false;

    if(n==2) return 1;

    if(n%2==0) return false;

    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    return prime;
}

int main(){
    int t;
    cin>>t;
    int temp;
    while(t--){
        int n,m;
        cin>>n>>m;

       for(int i=n;i<=m;i++){
            temp = isPrime(i);
            if(temp==1)
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
