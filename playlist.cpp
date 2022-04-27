#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
int main()
{
    fast
    ll n, num, sum = 1, j=1, lsum = 1, start = 0;
    cin>>n;
    map<ll, ll> mp;
    vector<pair<ll,ll>> vect;
    cin>>num;
    vect.pb(make_pair(0,num));
    mp[num]=0;
    for(ll i=1; i<n; i++){
        cin>>num;
        vect.pb(make_pair(i,num));
        if(mp.find(num)==mp.end()){
            mp[num] = j;
            j++;
            lsum++;
            if(lsum>sum)
                sum = lsum;
        }
        else{
            ll k = start, temp;
            while(1){
                temp = vect[k].second;
                if(temp == num){
                    mp.erase(temp);
                    break;
                }
                mp.erase(temp);
                k++;
            }
            lsum -= (k-start);
            start = k+1;
            mp[num] = j;
            j++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}