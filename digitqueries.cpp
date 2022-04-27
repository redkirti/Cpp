#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast

    map <ll, ll> mp;
    ll sum = 1, digits = 2, t = 10;
    mp[9] = 9;
    for(ll i=1; i<=10; i++){
        sum += (t*digits);
        t *= 10;
        mp[sum*9] = (t-1);
        digits++;
    }

    
    // for(auto x:mp){
    //     cout<<x.first<<"====="<<x.second<<"\n";
    // }

    short int q;
    cin>>q;

    while(q--){
        ll k, n, diff, start, last, start2, last2, num;
        cin>>k;
        if(k<10){
            cout<<k<<"\n";
        }
        else if(mp.find(k)!=mp.end()){
            n = mp[k];
            n %= 10;
            cout<<n<<"\n";
        }
        else{
            mp[k] = -1;
            auto itr = mp.find(k);
            itr++;
            mp.erase(k);
            n = itr->second;
            num = n;
            digits = 0;
            while(num!=0){
                digits++;
                num /= 10;
            }
            start = 10*(digits-1); 
            last = n;
            last2 = itr->first;
            start2 = (--itr)->first + digits;
            n = ceil(double(k-start2)/double(digits))+1;  //position of number in which digit is present
            num = start + (n-1) ; //the number in which that digit is present
            diff = (start2+((n-1)*digits)) - k;
            while(diff!=0){
                num /= 10;
                diff--;
            }
            cout<<(num%10)<<"\n";

        }

    }
    return 0;
}