#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

char arr[1000][1000];
bool flag = false;
int n,m, starti, startj, endi, endj;
queue <pair<int, int>> q;
vector < pair < pair<int, int>,vector<pair<int, int>> > > vect;

void bfs(){
    int i, j;
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        i = p.first;
        j = p.second;
        arr[i][j] = '#';
        if((i==endi)&&(j==endj)){
            flag = true;
            break;
        }
        vector <pair<int, int>> temp;
        if((j<m-1)&&(arr[i][j+1]=='.')){
            q.push({i,j+1});
            temp.push_back(make_pair(i,j+1));
        }
        if((j>0)&&(arr[i][j-1]=='.')){
            q.push({i,j-1});
            temp.push_back(make_pair(i,j-1));
        }
        if((i<n-1)&&(arr[i+1][j]=='.')){
            q.push({i+1,j});
            temp.push_back(make_pair(i+1,j));
        }
        if((i>0)&&(arr[i-1][j]=='.')){
            q.push({i-1,j});
            temp.push_back(make_pair(i-1,j));
        }
        vect.push_back(make_pair(make_pair(i,j), temp));
    }
}

int main()
{
    fast
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]=='A'){
                starti = i;
                startj = j;
            }
            else if(arr[i][j]=='B'){
                endi = i;
                endj = j;
                arr[i][j] = '.';
            }
        }
    }
    q.push({starti, startj});
    bfs();

    if(flag==false)
        cout<<"NO"<<"\n";
    else{
        // for(auto x: vect){
        //     auto a = x.first;
        //     auto b = x.second;
        //     cout<<"("<<a.first<<", "<<a.second<<") -> ";
        //     for(auto y: b)
        //         cout<<"("<<y.first<<", "<<y.second<<") ";
        //     cout<<"\n";
        // }
        int count = 0;
        vector <char> ans;
        pair<int, int> p = make_pair(endi, endj);
        for(int k=vect.size()-1;k>=0;k--){
            auto a = vect[k].first;
            auto b = vect[k].second;
            for(auto y:b){
                if(y==p){
                    count++;
                    if(p.first<a.first)
                        ans.push_back('U');
                    else if(p.first>a.first)
                        ans.push_back('D');
                    else if(p.second>a.second)
                        ans.push_back('R');
                    else
                        ans.push_back('L');
                    p = a;
                }
            }
        }
        cout<<"YES"<<"\n";
        cout<<count<<"\n";
        for(int k = ans.size()-1; k>=0; k--){
            cout<<ans[k];
        }
        cout<<"\n";
    }

    return 0;
}