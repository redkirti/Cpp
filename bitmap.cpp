#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

void clear( queue<pair<int, int> > &q )
{
   queue<pair<int, int> > empty;
   swap( q, empty );
}

bool arr[182][182];
bool visited[182][182];
int ans[182][182];
queue<pair<int, int> > q;
int n, m, fi, fj;

void bfs(){
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        int i,j;
        i = p.first;
        j = p.second;
        visited[i][j] = true;
        if( ((i<n-1)&&(arr[i+1][j]==true)) || ((i>0)&&(arr[i-1][j]==true))  ||  ((j<m-1)&&(arr[i][j+1]==true))  ||  ((j>0)&&(arr[i][j-1]==true)) ){
            fi = i;
            fj = j;
            break;
        }
        else{
            if((i<n-1)&&(visited[i+1][j]==false))
                q.push({i+1,j});
            if((i>0)&&(visited[i-1][j]==false))
                q.push({i-1,j});
            if((j<m-1)&&(visited[i][j+1]==false))
                q.push({i, j+1});
            if((j>0)&&(visited[i][j-1]==false))
                q.push({i, j-1});
        }
    }
    clear(q);
    for(int k = 0;k<n;k++){
        for(int l=0;l<m;l++)
            visited[k][l] = false;
    }
}

int main()
{
    fast
    int t, num;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string str;
        for(int i=0;i<n; i++){
            cin>>str;
            for(int j=0; j<m; j++){
                arr[i][j] = (str[j]=='1')?true:false;
                ans[i][j] = 0;
                visited[i][j] = false;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==false){
                    q.push({i, j});
                    bfs();
                    ans[i][j] = abs(i-fi)+abs(j-fj) + 1;
                }
            }
        }

        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                cout<<ans[i][j];
            }
            cout<<"\n";
        }

    }

    return 0;
}