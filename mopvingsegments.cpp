#include <bits/stdc++.h>
#include <string>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
bool compareInterval(pair<ll, ll> i1, pair<ll, ll> i2)
{
    return ((i1.first < i2.first)||(i1.first==i2.first)&&(i1.second>i2.second));
}
int main()
{
    fast
    short int T, N;
    cin>>T;
    while(T--){
        bool flag = true;
        map<ll, vector<pair<ll ,ll>>> m;
        cin>>N;
        while(N--){
            string s;
            ll L, R, V;
            cin>>L>>R>>V;
            m[V].push_back(make_pair(L, R));
        }
        // for(auto x:m){
        //     cout<<x.first<<" ";
        //     for(auto y:x.second){
        //         cout<<"("<<y.first<<", "<<y.second<<")"<<" ";
        //     }
        //     cout<<"\n";
        // }
        for(auto x:m){
            if(x.second.size()>2){
                vector<pair<ll, ll>> p = x.second;
                sort(p.begin(), p.end(), compareInterval);
                // for(int i = 0; i < p.size(); i++)
                // {
                //     cout << p[i].first << ", " << p[i].second << endl;
                // }
                for(ll i=0; i<p.size(); i++){
                    ll j = i+1;
                    int count = 0;
                    while(j<p.size()){
                        if(p[j].first<=p[j-1].second){
                            count++;
                            if(count>1){
                                flag = false;
                                break;
                            }
                        }
                        else
                            break;
                        j++;
                    }
                    if(!flag)
                        break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}