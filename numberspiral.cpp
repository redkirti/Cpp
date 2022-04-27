#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    ll t, x, y, mx, mi;
    cin>>t;
    while(t--){
        cin>>x>>y;
        mx = max(x, y);
        mi = min(x, y);
        if(((mx == x)&&(x%2!=0))||((mx == y)&&(y%2==0))){
            cout<<(((mx-1)*(mx-1))+1+(mi-1))<<"\n";
        }
        else
            cout<<(mx*mx - (mi-1))<<"\n";
    }
    return 0;
}