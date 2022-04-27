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
        cin>>s;
        cin>>t;
        bool flag = true;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == t[0]){
                flag = true;
                int count = 0, x = i+1, y = 1;
                while((x<s.length())&&(y<t.length())){
                    if(s[x] == t[y]){
                        if(count%2!=0){
                            flag = false;
                            break;
                        }
                        x++;
                        y++;
                    }
                    else{
                        x++;
                        count++;
                    }
                }
                if(y!=t.length())
                    flag = false;
                if(flag){
                    count += (s.length() - x);
                    if(count % 2 !=0)
                        flag == false;
                    else{
                        cout<<"YES\n";
                        break;
                    }
                }
            }
        }
        if(!flag)
                cout<<"NO\n";
    }
    return 0;
}