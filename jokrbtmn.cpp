#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    short int T;
    cin>>T;
    while(T--){
        ll N, M, L, num, col, ans = 1;
        cin>>N>>M>>L;
        map <ll, ll> m;
        for(ll i=0; i<M; i++){
            cin>>num;
            for(int ll j = 0; j<num; j++){
                cin>>col;
                m[col] = i;                
            }
        }
        cin>>num;
        for(ll i=1; i<L; i++){
            cin>>col;
            if(m[num] != m[col]){
                ans++;
                num = col;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}