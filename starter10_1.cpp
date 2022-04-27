#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(){
    ll N, mi = 0;
    cin>>N;
    ll A[N], B[N-1];
    for(ll i=0; i<N; i++){
        cin>>A[i];
    }
    for(ll i=0; i<N-1; i++){
        cin>>B[i];
    }
    sort(A, A+N);
    sort(B, B+N-1);
    if(N==2){
        if((B[0]-A[1])>0)
            cout<<B[0]-A[1]<<"\n";
        else
            cout<<B[0]-A[0]<<"\n";
    }
    else{
        ll a,b,c,d;
        a = B[0]-A[0];
        b = B[N-2]-A[N-1];
        c = B[0]-A[1];
        d = B[N-2]-A[N-2];
        if((a==b)&&(a!=0))
            mi = a;
        else{
            if((c==b)&&(c!=0))
                mi = c;
            else
                mi = a;
        }
        cout<<mi<<"\n";
    }
}

int main()
{
    fast
    short int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}