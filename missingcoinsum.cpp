#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    ll n, num;
    cin>>n;
    vector <ll> arr;
    for(ll i=0; i<n; i++){
        cin>>num;
        arr.pb(num);
    }
    sort(arr.begin(), arr.end());
    ll sum = 0;
    for(ll i=0; i<n; i++){
        if(sum+1 < arr[i])
            break;
        else
            sum += arr[i];
    }
    cout<<sum+1<<"\n";
    return 0;
}