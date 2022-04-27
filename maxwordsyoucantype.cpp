#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

long long maxPoints(vector<vector<int>>& points) {
        int index = 0, endi, sum = 0, sub = 0, max = -99999;
        for(int i=0; i<points[0].size(); i++){
            if(max<(points[0][i])){
                max = points[0][i];
                index = i;
            }
        }
        sum += points[0][index];
        
        for(int i =1; i<points.size(); i++){
            max = -1;
            for(int j=0; j<points[i].size(); j++){
                sub = abs(j - index);
                if( max < (points[i][j] - sub ) ){
                    max = points[i][j] - sub;
                    endi = j;
                }
            }
            sum += max;
            index = endi;
        }
        return (sum);
    }


int main()
{
    fast
    string t, bl;
    ll sum;;
    vector<vector<int>> vect {{0,3,0,4,2},{5,4,2,4,1},{5,0,0,5,1},{2,0,1,0,3}};
    sum = maxPoints(vect);
    cout<<sum<<"\n";
    
    return 0;
}