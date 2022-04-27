#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
 
 
char mp[1010][1010];
queue <pair<ll,ll>> q;
ll n, m;
 
void dfs(ll i, ll j){   
    mp[i][j] = '#';
    if(i<n-1)
        if(mp[i+1][j]=='.')
            dfs(i+1,j);
    if(i>0)
        if(mp[i-1][j]=='.')
            dfs(i-1,j);
    if(j<m-1)
        if(mp[i][j+1]=='.')
            dfs(i, j+1);
    if(j>0)
        if(mp[i][j-1]=='.')
            dfs(i, j-1);
}
 
 
int main()
{
    fast
    ll count = 0;
    cin>>n>>m;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>mp[i][j];
        }
    }
 
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(mp[i][j]=='.'){
                dfs(i, j);      
                count++;          
            }
        }
    }
    cout<<count<<"\n";
 
    // for(ll i=0; i<n; i++){
    //     for(ll j=0; j<m; j++){
    //         cout<<mp[i][j];
    //     }
    //     cout<<"\n";
    // }
    return 0;
}