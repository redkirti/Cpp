#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<char, ll>
#define vect vector<ll, ll>

void solve(){
    string s;
    cin>>s;
    mp m;
    for(ll i=0; i<s.length(); i++){
        m[s[i]]++;
    }
    ll oddc=0, evenc=0;
    char ch;
    for(auto x:m){
        if(x.second%2==0)
            evenc++;
        else{
            oddc++;
            ch = x.first;
        }
    }
    if((s.length()%2==0) && (oddc==0)){
        for(auto x:m){
            for(ll j=0;j<x.second/2; j++){
                cout<<x.first;
            }
        }
        for (auto it = m.rbegin(); it != m.rend(); it++) {
            for(ll j=0;j<(it->second)/2; j++){
                cout<<it->first;
            }
        }
    }
    else if((s.length()%2!=0) && (oddc==1)){
        for(auto x:m){
            for(ll j=0;j<(x.second/2); j++){
                if(x.first!=ch)
                    cout<<x.first;
            }            
        }
        for(ll j=0; j<m[ch]; j++)
            cout<<ch;
        for (auto it = m.rbegin();it != m.rend(); it++) {
            if(it->first!=ch){
                for(ll j=0;j<(it->second)/2; j++){
                    cout<<it->first;
                }
            }
        }
    }
    else
        cout<<"NO SOLUTION\n";
}

int main()
{
    fast
    ll T = 1;
    while(T--){
        solve();
    }
    return 0;
}