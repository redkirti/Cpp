#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int left1 = 5, left2 = 5, goal1 = 0, goal2 = 0;
        int cleft1 = 5, cleft2 = 5, cgoal1 = 0, cgoal2 = 0;
        bool flag = false;
        for(int i=0; i<10; i++){
            if(i%2==0){
                //1st player
                if(s[i] == '1'){
                    goal1++;
                    left1--;
                    cgoal1++;
                    cleft1--;
                }
                else if(s[i] == '0'){
                    left1--;
                    cleft1--;
                }
                else{
                    goal1++;
                    left1--;

                    cleft1--;
                }
            }
            else{
                //2nd player
                if(s[i] == '1'){
                    goal2++;
                    left2--;

                    cgoal2++;
                    cleft2--;
                }
                else if(s[i] == '0'){
                    left2--;

                    cleft2--;
                }
                else{
                    left2--;

                    cgoal2++;
                    cleft2--;                    
                }
            }

            if(goal1>goal2){
                if((goal1-goal2)>(left2)){
                    cout<<(10-left1-left2)<<"\n";
                    flag = true;
                    break;
                }
            }
            else{
                if((goal2-goal1)>(left1)){
                    cout<<(10-left1-left2)<<"\n";
                    flag = true;
                    break;
                }
            }

            if(cgoal1>cgoal2){
                if((cgoal1-cgoal2)>(cleft2)){
                    cout<<(10-cleft1-cleft2)<<"\n";
                    flag = true;
                    break;
                }
            }
            else{
                if((cgoal2-cgoal1)>(cleft1)){
                    cout<<(10-cleft1-cleft2)<<"\n";
                    flag = true;
                    break;
                }
            }
        }
        if(!flag)
            cout<<10<<"\n";
    }
    return 0;
}