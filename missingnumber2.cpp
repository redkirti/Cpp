#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;   
    cin>>n;
    long int arr[n-1];
    for(long int i=0; i<n-1; i++)
        cin>>arr[i];
    sort(arr, arr+(n-1));
    for(long int i =0; i<n; i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
            break;
        }
    }
    return 0;
}