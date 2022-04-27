#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    ll n, cost = 0, mid, num;
    cin>>n;
    vector<ll> len;
    for(ll i=0; i<n; i++){
        cin>>num;
        len.push_back(num);
    }
    sort(len.begin(), len.end());
    mid = len[n/2];
    for(ll i=0; i<n; i++){
        cost += abs(mid-len[i]);
    }
    cout<<cost<<"\n";
    return 0;
}