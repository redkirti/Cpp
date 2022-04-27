#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    int n, m, i, num;
    cin>>n>>m;
    multiset <int> h;
    for(i=0; i<n; i++){
        cin>>num;
        h.insert(num);
    }
    for(i=0; i<m; i++){
        cin>>num;
        auto it = h.upper_bound(num);
        if(it==h.begin()){
            cout<<-1<<"\n";
        }
        else{
            cout<<*(--it)<<"\n";
            h.erase(it);
        }        
    }    
    return 0;
}