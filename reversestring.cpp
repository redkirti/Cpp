#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    int q;
    cin>>q;
    while(q--){
        string s, t;
        bool flag = false;
        cin>>s;
        cin>>t;
        for(int i=0; i<s.length(); i++){
            if(t[0]==s[i]){
                string temp;
                temp.push_back(t[0]);
                int x = 1,y = i+1;
                while((t[x] == s[y])&&(x<t.length())&&(y<s.length())){
                    temp.push_back(t[x]);
                    x++;y++;
                }
                y-=2;
                while((t[x] == s[y])&&(x<t.length())&&(y>=0)){
                    temp.push_back(t[x]);
                    x++;y--;
                }

                if(t.compare(temp)==0){
                    flag = true;
                    break;
                }

            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}