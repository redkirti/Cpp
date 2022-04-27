#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    short int t;
    cin>>t;
    while(t--){
        short int n;
        cin>>n;
        if(n == 1)
            cout<<1<<endl;
        else if(n == 2)
            cout<<-1<<endl;
        else{
            int type=0 ,num1 =1, num2;
            float temp = n;
            num2 =  ceil(temp*temp/2) + 1;
            for(int i=1;i <= n; i++){
                for(int j=1; j <= n; j++){
                    if(type == 0){
                        cout<<num1<<" ";
                        type = 1;
                        num1++;
                    }
                    else{
                        cout<<num2<<" ";
                        type = 0;
                        num2++;
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
