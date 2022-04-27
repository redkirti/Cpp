#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n,m;
    cin>>n>>m;
    long int a,b,arr[m], collosion=0;
    
    vector< pair <int,int> > x;
    vector< pair <int,int> > y;
    
    for(long int i = 0; i<n; i++){
        cin>>a,b;
        x.push_back( make_pair(a,b) );
    }
    sort(x.begin(), x.end());
    for(long int i = 0; i<m; i++){
        cin>>a,b;
        y.push_back( make_pair(a,b) );
    }
    sort(y.begin(), y.end());
    
    for(long int i = 0; i<m; i++)
        arr[i] = 1;

    float num1, num2; 
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[j]==0)
                continue;
            num1 = y[j].first/x[i].second;
            num2 = x[i].first/y[j].second;
            if(num1 == num2){
                collosion++;
                arr[j] = 0;
                break;
            }
        }
    }
    cout<<collosion<<endl;
    return 0;
}