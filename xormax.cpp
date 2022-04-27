#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
void solve(){
    ll arr[3], temp, a, b, c;
	for(int i =0; i<3; i++){
		cin>>arr[i];
	}
    if((arr[0]==1)&&(arr[1]==1)&&(arr[2]==1)){
            cout<<"NO\n";
    }
    else{
        temp = arr[0]+arr[1]+arr[2];
        sort(arr,arr+3);
        if((temp%4==0)){
            if(((temp)/4)<=arr[0]){
                cout<<"YES\n";
            }
        }
        else
            cout<<"NO\n";
    }
}
int main()
{
    fast
    ll T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}