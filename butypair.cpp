#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define ump unordered_map<ll, ll>
#define vect vector<ll, ll>

void solve(){
    ll N, num, count = 0;
    ump m;
    cin>>N;
    for(ll i=0; i<N; i++){
        cin>>num;
        m[num]++;
    }
    for(auto x:m){
        count += ((N-x.second)*(x.second));
    }
    cout<<count<<"\n";
}

int main()
{
    fast
    short int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}