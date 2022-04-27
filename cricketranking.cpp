#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back

int main()
{
    fast
    short int T;
    cin>>T;
    while(T--){
        short int R[2], W[2], C[2], count0 = 0, count1 = 0;
        cin>>R[0]>>W[0]>>C[0];
        cin>>R[1]>>W[1]>>C[1];
        if(R[0]>R[1])
            count0++;
        else
            count1++;
        if(W[0]>W[1])
            count0++;
        else
            count1++;
        if(C[0]>C[1])
            count0++;
        else
            count1++;
        if(count0>count1)
            cout<<"A"<<"\n";
        else
            cout<<"B"<<"\n";
    }
    return 0;
}