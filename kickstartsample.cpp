#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

ll solve(){
    ll N, M, temp, sum = 0;
    cin>>N>>M;
    for(ll i=0; i<N; i++){
        cin>>temp;
        sum += temp;
    }
    return (sum%M);
}

int main(){
    fast
    ll T, ans;
    cin>>T;
    for(ll j=0; j<T; j++){
        ans = solve();
        cout<<"Case #"<<j+1<<": "<<ans<<"\n";
    }
    return 0;
}