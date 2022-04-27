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
        ll n, k, num, index = 1;
        cin>>n>>k;
        map <ll, ll> m;
        vector<ll> v;
        for(ll i=0; i<n; i++){
            cin>>num;
            v.pb(num);
            m[num]++;
        }
        vector<ll> ans;
        map<ll, ll>a;
        for(auto x:v){
            if(m[x]!=0){
                if(m[x]<=k){
                    ans.pb(index);
                    m[x]--;
                    if(index<k)
                        index++;
                    else
                        index = 1;
                }
                else{
                    ans.pb(0);
                    m[x]--;
                }
            }
        }
        for(auto y:ans){
            cout<<y<<" ";
        }
        cout<<"\n";

    }
    return 0;
}