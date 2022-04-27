#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, string>
  
void gray(ll n){
    vector <string> v, temp;
    v.pb("0");
    v.pb("1");
    for(ll i=1; i<n; i++){
        temp.clear();
        for(auto it = v.rbegin(); it != v.rend(); it++){
            temp.pb(*it);
        }
        for(auto x:temp){
            v.pb("1"+x);
        }
        for(ll j=0; j<v.size()/2; j++){
            v[j] = "0"+v[j];
        }
    }
    for(auto x:v)
        cout<<x<<"\n";
}
 
void solve(){
    ll n;
    cin>>n;
    gray(n);
 
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