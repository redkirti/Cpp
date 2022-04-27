#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>

void solve(int disk, int source, int dest, int supp){
    if(disk == 1)
        cout<<source<<" "<<dest<<"\n";
    else{
        solve(disk-1, source, supp, dest);
        cout<<source<<" "<<dest<<"\n";
        solve(disk-1, supp, dest, source);
    }
}

int main()
{
    fast
    short int n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    solve(n,1,3,2);
    return 0;
}