#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    string s, t;
    cin>>s;
    int k;
    cin>>k;
    set <string> words;
    for(int i=0; i<k; i++){
        cin>>t;
        words.insert(t);
    }
    for(int i=0; i<s.length(); i++){
        t = s.substr(0,i);
        if(s.find()!=s.end()){
            t = s.substr(i+1,s.length()-1);
        }
    }
    return 0;
}