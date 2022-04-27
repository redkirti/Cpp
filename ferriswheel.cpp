#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast
    ll n, x, num, i, j, count = 0;
    cin>>n>>x;
    vector <ll> p;
    for(i=0; i<n; i++){
        cin>>num;
        if(num<=x)
            p.push_back(num);
    }
    n = p.size();
    sort(p.begin(), p.end());
    i=0; j=n-1;
    while(i<=j){
        if(i==j){
            count++;
            break;
        }
        else if((p[i]+p[j])<=x){
            count++;
            i++;
            j--;
        }
        else{
            count++;
            j--;
        }
    }
    cout<<count<<"\n";
    return 0;
}