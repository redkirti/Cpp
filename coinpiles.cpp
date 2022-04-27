#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(){
    ll a,b;
    cin>>a>>b;
    if( (((a>=b) && (a<=b*2)) ||  ((a<b) && (b<=a*2)))    && ((a+b)%3==0))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
    fast
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}