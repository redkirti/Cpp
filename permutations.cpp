#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;
    cin>>n;
    if(n==1)
        cout<<1;
    else if(n<4)
        cout<<"NO SOLUTION";
    else{
        for(long int i= 2; i<=n; i+=2)
            cout<<i<<" ";
        for(long int i= 1; i<=n; i+=2)
            cout<<i<<" ";
    }
    return 0;
}