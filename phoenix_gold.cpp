#include<iostream>
using namespace std;

int main(){
    short int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        short int w[n], temp=-1, sum=0, term =0;
        for(int i=0; i<n; i++){
            cin>>w[i];
            sum += w[i];
        }
        if(sum == x){
           cout<<"No"<<endl;
        }
            
        else{
            cout<<"Yes"<<endl;
            sum = 0;
            for(int i=0; i<n; i++){
                sum += w[i];
                if(sum == x){
                    temp =0;
                    term = w[i];
                }
                else{
                    cout<<w[i]<<" ";
                    if(temp == 0){
                        cout<<term<<" ";
                        temp = -1;
                    }
                }
            }
            cout<<endl;
        }
            
    }
    return 0;
}