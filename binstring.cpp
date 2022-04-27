#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(){
    ll N, temp;
    cin>>N;
    ll arr[N];
    for(ll i=0; i<N; i++){
        cin>>arr[i];
    }
    for(ll i=1; i<N-1; i++){
        arr[i] = arr[i-1]*arr[i+1];
        i++;
    }
    if(N%2==0)
        arr[N-1] = arr[N-1]*arr[N-2];
    for(ll i=0; i<N; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
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