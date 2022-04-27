#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    ll n;
    cin>>n;
    for(ll i =1; i <= n; i++){
        cout<<(((i*i)*((i*i)-1))-8-24-((i-4)*16)-16-((i-4)*24)-((i-4)*(i-4)*8))/2<<"\n";
    }
    return 0;
}