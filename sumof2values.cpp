#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    ll n, x, num, a, b;
    cin>>n>>x;
    map<ll, ll> mp;
    cin>>num;
    mp.insert({num,0});
    bool flag = false;
    for(ll i=1; i<n; i++){
        cin>>num;
        auto itr = mp.find(x-num);
        if(itr!=mp.end()){
            flag = true;
            a = (itr->second) + 1;
            b = i+1;
        }
        mp.insert({num,i});
    }
    if(flag)
        cout<<a<<" "<<b<<"\n";
    else
        cout<<"IMPOSSIBLE\n";
    return 0;
}