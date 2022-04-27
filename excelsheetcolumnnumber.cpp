#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>


int titleToNumber(string columnTitle) {
        map<char, int> m;
        int n = 26, sum = 0, temp, sz = columnTitle.size();
        for(int i=1;i <27; i++){
            m[char(64+i)] = i;
        }
        
        if(sz!=1){
            sum = 1;
            for(int i=1; i<sz; i++)
                sum *= n;
        }

        for(int i=0; i<sz-1; i++){
            temp = m[columnTitle[i]]-1;
            sum = sum + temp*(pow(26,(sz-(i+1))));
        }
        sum += (m[columnTitle[sz-1]]);
        return sum;
    }

int main(){
    fast
    ll T;
    cin>>T;
    string s;
    while(T--){
        cin>>s;
        cout<<titleToNumber(s)<<" ";
    }
    return 0;
}