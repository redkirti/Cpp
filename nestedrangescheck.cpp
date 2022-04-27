#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << " " << #x << " = " << x << "\n";
#define deb2(x, y) cout << " " << #x << " = " << x << " " << #y << " = " << y << "\n";
#define deb3(x, y, z) cout << " " << #x << " = " << x << " " << #y << " = " << y << " " << #z << " = " << z << "\n";
const int mod = 1000000007;
#define pb push_back

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] < v2[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<vector<ll>> vect;
    int n;
    ll x, y;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>x>>y;
        vect.pb({x,y,0,0,i});
    }
    sort(vect.begin(), vect.end(), sortcol);
    for(ll i=1; i<n; i++){
        if((vect[i][0] == vect[i-1][0])&&(vect[i][1] == vect[i-1][1])){
            vect[i][2] = 1;
            vect[i][3] = 1;
            vect[i-1][2] = 1;
            vect[i-1][3] = 1;
        }
        else if((vect[i][0] == vect[i-1][0])&&(vect[i-1]<vect[i])){
            vect[i][2] = 1;
            vect[i-1][3] = 1;
        }
    }
}