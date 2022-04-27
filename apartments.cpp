#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    ll n, m, k, count = 0, num;
    cin>>n>>m>>k;

    vector <ll> a, b;

    for (ll i=0; i<n ;i++){
        cin>>num;
        a.push_back(num);
    }
    for (ll i=0; i<m ;i++){
        cin>>num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll i=0, j=0;
    while((i<n)&& (j<m)){
        if(abs(a[i]-b[j])<=k){
            count++;
            i++;
            j++;
        }
        else{
            if(a[i]-b[j]>k)
                j++;
            else
                i++;
        }
    }

    cout<<count<<"\n";
    return 0;
}