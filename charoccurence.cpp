#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

vector <ll> vect;

int decToBinary(ll n)
{
    for (ll i = 31; i >= 0; i--) {
        ll k = n >> i;
        if (k & 1){
            vect[i] = vect[i] - 1;
        }
        else{
            vect[i] = vect[i] + 1;
        }
    }
}

int main()
{
    fast
    int T;
    cin>>T;
    while(T--){
        vect.clear();
        for(int a = 0; a<32; a++){
            vect.pb(0);
        }
        short int N;
        cin>>N;
        ll arr[N], X =0, b =0, temp, ans = 0;
        for(ll i=0; i<N; i++){
            cin>>arr[i];
            decToBinary(arr[i]);
        }

        for(ll l=0; l<32; l++){
            if(vect[l]>0)
                temp = 0;
            else
                temp = 1;
            X += ((pow(2,b)) * temp);  
            b++;
        }
         for (ll i = 0; i < N; i++){
            arr[i] = arr[i] ^ X;
            ans |= arr[i];
        }
        cout<<X<<" "<<ans<< "\n";
    }
    return 0;
}