#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%2 ==0){
            if(ceil(log2(n))== floor(log2(n))){
                cout<<"Yes"<<endl;
            }
            else{
                n = n/2;    
                if ((ceil((double)sqrt(n)) == floor((double)sqrt(n)))) {
                    cout << "Yes"<<endl;
                }
                else
                    cout<<"No"<<endl;
            }
        }
        else
            cout<<"No"<<endl;
        
    }
}