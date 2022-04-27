#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
int main()
{
    fast
        ll n,
        num;
    cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    ll maxsum = arr[0], localmax = 0;
    for (ll i = 0; i < n; i++)
    {
        localmax += arr[i];
        if (localmax > maxsum)
            maxsum = localmax;
        if (localmax < 0)
            localmax = 0;
    }
    cout << maxsum << "\n";
    return 0;
}