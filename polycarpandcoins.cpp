#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    int T;
    cin>>T;
    while(T--){
        ll N, ans;
        cin>>N;
        ans = N/3;
        if(N%3==0){
            cout<<ans<<" "<<ans<<"\n";
        }
        else if(N%3==1){
            cout<<ans+1<<" "<<ans<<"\n";
        }
        else{
            cout<<ans<<" "<<ans+1<<"\n";
        }
    }
    return 0;
}