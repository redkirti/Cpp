#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n, ncopy;
        cin>>n;
        int count = 0, sum  =0;
        ncopy = n;
        while(ncopy!=0){
            ncopy = ncopy/10;
            count++;
        }
        
        sum += (count-1)*9;
        
        int num = 1 ,temp = 1;
        
        for(int i = 1; i < count; i++){
            temp = temp * 10;
            num += temp;
        }
        
        for(int i = num; i <= n; i+=num){
            sum++;
        }
        
        cout<<sum<<endl;
    }
    return 0;
}
