#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n+1];
        for(int i = 1; i<= n; i++){
            cin>>a[i];
        }
        int count = 0;
        
        for(int i=1; i<n ; i++){
            for(int j=i+1; j<=n; j++){
                if((a[j] - a[i])==(j-i))
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
