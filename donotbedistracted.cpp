#include <iostream>

using namespace std;

int main()
{
    short int t;
    cin>>t;
    while(t--){
        short int n;
        cin>>n;
        char str[n];
        for(int i=0; i<n; i++){
            cin>>str[i];
        }
        char temp = str[0], newstr[n];
        int j=0, flag = 1;
        for(int i=1; i<n; i++){
            if(temp!=str[i]){
                newstr[j] == temp;
                temp = str[i];
                
                for(int k =0; k<=j;k++){
                    if(str[i] == str[k]){
                        flag = 0;
                        break;
                    }
                }
                
                if(flag == 0)
                    break;
                
                j++;
            }
        }
        if(flag == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
