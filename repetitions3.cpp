#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;  
    cin>>s;
    long int len = 1, maxlen = 1;
    for(long int i =1; i<s.length();i++){
        if(s[i] == s[i-1]){
            len++;
            if(maxlen<len)
                maxlen = len;
        }
        else
            len = 1;
    }
    cout<<maxlen;
    return 0;
}