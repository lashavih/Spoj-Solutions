#include<bits/stdc++.h>
using namespace std;


int main(){
map <string, int> mp;
map <string, int> :: iterator it;
char s[10000];

 int t; scanf("%d", &t);
  for (int j = 0; j < t; j++) {
    if (j > 0) printf("\n");
    int n; scanf("%d\n", &n);
    while(n--){
    gets(s);
    mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
    printf("%s %d\n",it->first.c_str(),it->second);
}
mp.clear();
}
return 0;
}
