#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    ll T
    cin>>T;
    while(T--){
        string N, C;
        cin>>N;
        ll maxi = 0, maxn = 0, num;
        for(ll i=0; i<N.length(); i++){
            num = N[i] - '0';
            if(num>max){
                max = num;
                maxi = i;
            }
        }
        strcpy(C, N);
        C.erase(C.begin() + maxi);
        N.erase(N.begin());
        ll num1, num2;
        num1 = 

    }
    return 0;
}