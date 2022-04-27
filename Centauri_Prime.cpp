#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(ll i){
    string S;
    cin>>S;
    char ch = S[S.size()-1];
    if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')){
        cout<<"Case #"<<i+1<<": "<<S<<" is ruled by Alice.\n";
    }
    else if(ch == 'y')
        cout<<"Case #"<<i+1<<": "<<S<<" is ruled by nobody.\n";
    else
        cout<<"Case #"<<i+1<<": "<<S<<" is ruled by Bob.\n";
}

int main(){
    fast
    short int T;
    bool ans;
    cin>>T;
    for(ll j=0; j<T; j++){
        solve(j);
    }
    return 0;
}