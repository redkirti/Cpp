#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;
    cin>>n;
    long int arr[n], moves = 0;
    cin>>arr[0];
    for(long int i=1; i<n; i++){
        cin>>arr[i];
        if(arr[i]<arr[i-1]){
            moves += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<moves;
    return 0;
}