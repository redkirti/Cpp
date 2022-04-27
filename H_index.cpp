#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(short int i){
    ll N;
    cin>>N;
    vector <ll> C(N+1, 0);
    ll temp, start;
    cout<<"Case #"<<i+1<<": ";
    for(ll j=1; j<=N; j++){
        cin>>temp;
        if(temp>=N)
            start = N;
        else
            start = temp;
        for(;start>0; start--){
            C[start]++;
        }
        ll count = 0;
        for(ll k=j; k>0; k--){
            if(C[k]>=k){
                cout<<k<<" ";
                break;
            }
        }
    }
    cout<<"\n";
}

int main(){
    fast
    short int T;
    cin>>T;
    for(int i=0; i<T; i++){
        solve(i);
    }
    return 0;
}