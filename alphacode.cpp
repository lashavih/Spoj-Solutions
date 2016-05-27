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

string increment_numerical_string(string &s)
{
    std::string::reverse_iterator iter = s.rbegin(), end = s.rend();
    int carry = 1;
    while (carry && iter != end)
    {
        int value = (*iter - '0') + carry;
        carry = (value / 10);
        *iter = '0' + (value % 10);
        ++iter;
    }
    if (carry) s.insert(0, "1");

    return s;
}
bool isPalindrome(string str) {
    int n = str.length();
    for( int i=0;i<n/2;i++ )
        if (str.at(i) != str.at(n-i-1)) return false;
    return true;
}

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    s=increment_numerical_string(s);
    while(!isPalindrome(s)){
        s=increment_numerical_string(s);
    }
    cout<<s<<endl;
}
return 0;
}

