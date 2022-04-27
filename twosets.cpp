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
    ll sum = (n*(n+1))/2;
    if(sum&1)
        cout<<"NO\n";
    else{
        sum /= 2;
        set <ll> s1, s2;
        while(n){
            if(sum-n>=0){
                s1.insert(n);
                sum -= n;
            }
            else
                s2.insert(n);
            n--;
        }
        cout<<"YES\n";
        cout<<s1.size()<<"\n";
        for(auto x:s1)
            cout<<x<<" ";
        cout<<"\n";
        cout<<s2.size()<<"\n";
        for(auto x:s2)
            cout<<x<<" ";
        cout<<"\n";

    }
    return 0;
}