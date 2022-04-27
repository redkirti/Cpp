#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    ll n, k, num, sum = 0, t = 0, cp, temp;
    cin>>n>>k;
    vector <ll> time;
    map <ll, ll> mp;

    for(ll i=0; i<n ;i++){
        cin>>num;
        time.pb(num);
    }
    sort(time.begin(), time.end());

    mp[time[0]] = 1;
    if(time.size()==1){
        cout<<time[0]*k<<"\n"; 
        return 0;
    }
    for(ll i=1; i<n; i++){
        cp = 0;
        ll j = i;
        cp = (time[i]/time[i-1])*(mp[time[i-1]]) + 1;
        temp = (time[i] % time[i-1]);
        while(temp>=time[0]){
            if(mp.find(temp)!=mp.end()){
                cp += mp[temp];
                break;
            }
            else{
                mp[temp] = 0;
                auto itr = mp.find(temp);
                itr--;
                mp.erase(temp);
                cp += (itr->second)*(temp/(itr->first));
                temp = temp % (itr->first);
            }
        }
        mp[time[i]] = cp;
        if(cp == k){
            cout<<time[i]<<"\n";
            return 0;
        }
        else if(cp > k){
            ll ct;
            ct = time[i-1];
            ll rp = k-mp[time[i-1]];

            while(rp!=0){
                if(mp.find(temp)!=mp.end()){
                    cp += mp[temp];
                    break;
                }
                else{
                    mp[temp] = 0;
                    auto itr = mp.find(temp);
                    itr--;
                    mp.erase(temp);
                    cp += (itr->second)*(temp/(itr->first));
                    temp = temp % (itr->first);
                }
            }

        }
    }

    // for(auto x: mp){
    //     cout<<(x.first)<<"-------"<<(x.second)<<"\n";
    // }

    

    
    
    
    return 0;
}