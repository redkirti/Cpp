#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    short int T;
    cin>>T;
    while(T--){
        map <char, int> m;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        int countsingle = 0, countmore = 0, sum = 0;
        for(auto x:m){
            if(x.second == 1)
                countsingle++;
            else
                countmore++;
        }
        cout<<((countsingle/2) + countmore)<<"\n";
    }
    return 0;
}