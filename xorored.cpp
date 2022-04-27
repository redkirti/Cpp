#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(){
    short int N, bit;
    cin>>N;
    ll arr[N], n = 0, temp;
    vector <int> v(32, 0);
    for(ll i=0; i<N; i++){
        cin>>temp;
        arr[i] = temp;
        for(short int j=0; j<32; j++){
            bit = temp&1;
            temp = temp>>1;
            if(bit == 1)
                v[j]++;
            else
                v[j]--;
        }
    }
    
    for(short int i=0; i<32; i++){
        if(v[i]>0)
            n = n + (1<<i);
    }
    
    ll ans = arr[0]^n;
    for(ll i=1; i<N; i++){
        ans |= (arr[i]^n);
    }
    cout<<n<<" "<<ans<<"\n";
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