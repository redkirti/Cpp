#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve()
{
    int n,ans;
    cin>>n;
    
    int p1 = 0,p2 = 0;
    
    int A[n];
    
    for(int i=0;i<n;i++){
        cin>>A[i];
        p2 += A[i];
    }
        
    if(n == 1){
        cout<<p2<<"\n";
        return;
    }
        
    ans = p2;

    sort(A.begin(), A.end());
    
    for(int i=0;i<n;i++){
        p1 += A[i];
        p2 -= A[i];
        ans = min(max(p1,p2),ans);
    }
    cout<<ans<<"\n";
}
int main(){
    fast
    ll T;
    cin>>T
    while(T--){
        solve();
    }
    return 0;
}