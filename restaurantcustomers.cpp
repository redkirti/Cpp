#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    ll n, a, b;
    cin>>n;
    vector <pair<ll, bool>> A;
    while(n--){
        cin>>a>>b;
        A.push_back(make_pair(a,true));
        A.push_back(make_pair(b,false));
    }
    sort(A.begin(), A.end());
    ll count = 0, max=0;
    for(ll i=0; i<A.size(); i++){
        if(A[i].second==true){
            count++;
            if(count>max)
                max = count;
        }
        else{
            count--;
        }
    }
    cout<<max<<"\n";
    return 0;
}