#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short int T;
    cin>>T;
    while(T--){
        long int N,K, sum = 0;
        cin>>N>>K;
        string str;
        long int chg;
        cin>>str;
        for(long int i=0; i<N-1; i++){
            if(str[i] == str[i+1])
                sum += 2;
            else
                sum += 1; 
        }
        long int count = 0;
        for(long int i=1; i<=K; i++){
            cin>>chg;
            chg--;
            if(str[chg] == '0')
                str[chg] = '1';
            else
                str[chg] = '0';

            if(chg == 0){
                if(str[0] == str[1])
                    count += 1;
                else
                    count -= 1;
            }
            else if(chg == N-1){
                if(str[N-1] == str[N-2])
                    count += 1;
                else
                    count -= 1;
            }
            else{
                if(str[chg] == str[chg-1])
                    count += 1;
                else
                    count -= 1;
                if(str[chg] == str[chg+1])
                    count += 1;
                else
                    count -= 1;
            }
            sum += count;
            cout<<sum<<endl;
        }
            
        
    }
    return 0;
}