#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(){
    ll n, count = 0;
    cin>>n;
    while(n!=0){
        count += n/5;
        n = n/5;
    }
    cout<<count<<"\n";
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