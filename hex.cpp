#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mkp make_pair
#define mp map<ll, ll>
#define vect vector<ll, ll>
//check for different ends
vect q;
///////////////
int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };
 
bool isValid(bool vis[][],
             int row, int col, int N)
{
    if (row < 0 || col < 0 || row >= N || col >= N)
        return false;

    if (vis[row][col])
        return false;

    return true;
}

void BFS(int grid[][], bool vis[][], int row, int col, int N)
{
    queue<pair<int, int> > q;
    q.push({ row, col });
    vis[row][col] = true;

    while (!q.empty()) {
 
        pair<int, int> cell = q.front();
        int x = cell.first;
        int y = cell.second;
 
        cout << grid[x][y] << " ";
 
        q.pop();

        for (int i = 0; i < 4; i++) {
 
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];
 
            if (isValid(vis, adjx, adjy, N)) {
                q.push({ adjx, adjy });
                vis[adjx][adjy] = true;
            }
        }
    }
}






short int bfs(char[][], vect v){
    if()
}

void solve(short int i){
    short int N, rwin=0, bwin=0, rcount=0, bcount=0, temp;
    cin>>N;
    char hex[N][N];
    for(short int j=0; j<N; j++){
        for(short int k=0; k<N; k++){
            cin>>temp;
            hex[j][k] = temp;
            (temp=='R')?rcount++:bcount++;
        }
    }
    if((abs(rcount-bcount))>1)
        cout<<"Case #"<<i+1<<": Impossible\n";
    else{
        vect v;
        for(short int m =0; m<N; m++){
            if(hex[m][0]=='B')
                v.pb(mkp(m,0));
        }
        q.clear();
        bwin = bfs(hex, v);
    }

    cout<<"Case #"<<i+1<<": ";
    
}

int main(){
    fast
    short int T;
    cin>>T;
    for(int i=0; i<T; i++){
        solve(i);
    }
    return 0;
}