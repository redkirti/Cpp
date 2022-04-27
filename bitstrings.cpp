#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>
#define m 1000000007

void solve(){
    ll n, res=1;
    cin>>n;
    for(ll i=0; i<n; i++)
        res = (res*2)%m;
    cout<<res<<"\n";
}

int main()
{
    fast
    ll T=1;
    while(T--){
        solve();
    }
    return 0;
}