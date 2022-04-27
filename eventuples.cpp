#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    int T;
    cin>>T;
    while(T--){
        ll N, Q, L, R, even = 0, odd = 0;
        cin>>N>>Q;
        ll arr[N];
        map<ll, pair<ll, ll>> m;
        for(ll i=0; i<N; i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
                m[i] = {even, odd};
            }
            else{
                odd++;
                m[i] = {even, odd};
            }
        }
        while(Q--){
            cin>>L>>R;
            L--;R--;
            ll e = 0, o = 0, ans = 0;
            e = m[R].first - m[L].first;
            o = m[R].second - m[L].second;
            if(arr[L]%2==0)
                e++;
            else
                o++;
            if(e>2){
                ans += (((e)*(e-1)*(e-2))/6);
            }
            if((o>1)&&(e>0)){
                ans += (((o*(o-1))/2)*e);
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}