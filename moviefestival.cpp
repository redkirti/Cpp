#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    ll n, a, b;
    cin>>n;
    vector<pair<ll,ll>> A;
    while(n--){
        cin>>a>>b;
        A.push_back(make_pair(b,a));
    }
    sort(A.begin(),A.end());

    ll count =1, lwe = A[0].first;

    for(ll i=1; i<A.size(); i++){
        if(A[i].second>=lwe){
            lwe = A[i].first;
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}