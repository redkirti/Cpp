#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    ll T, N;
    cin>>T;
    while(T--){
        map <string, int> m1, m2;
        unordered_set <string> stringSet;
        cin>>N;
        while(N--){
            string s;
            int t;
            cin>>s;
            cin>>t;
            if(t==0){
                m1[s]++;
            }
            else{
                m2[s]++;
            }
            stringSet.insert(s);
        }
        int sum = 0;
        for(auto x: stringSet){
            bool f1 = false, f2 = false;
            if(m1.find(x)!=m1.end())
                f1 = true;
            if(m2.find(x)!=m2.end())
                f2 = true;
            if(f1&&f2){
                if(m1[x]>=m2[x])
                    sum += m1[x];
                else
                    sum += m2[x];
            }
            else if(f1&&(!f2)){
                sum += m1[x];
            }
            else{
                sum += m2[x];
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}