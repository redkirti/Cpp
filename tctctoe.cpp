#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	// long int T;
	// cin>>T;
	while(1){
	    char A[3][3];
	    short int countx = 0, counto = 0, count_ = 0, wonx = 0, wono = 0, num;
        srand(time(0));
	    for(int i=0; i<3; i++){
	        for(int j=0; j<3; j++){
	            // cin>>A[i][j];
                num = rand() % 3;
                if(num == 0)
                    A[i][j] = 'X';
                else if(num == 1)
                    A[i][j] = 'O';
                else
                    A[i][j] = '_';

                cout<<A[i][j]<<" ";

	            if(A[i][j] == 'X')
	                countx++;
	            else if(A[i][j] == 'O')
	                counto++;
	            else
	                count_++;
	        }
            cout<<endl;
	    }
	    
	    if((countx - counto > 1) || ((countx - counto < -1)))
	        cout<<3<<endl;
	    else{
	        for(int i=0;i <3; i++){
	            if((A[i][0] != '_') && (A[i][0] == A[i][1]) && (A[i][0] == A[i][2])){
                    if(A[i][0] == 'X')
                        wonx++;
                    else
                        wono++;
                }
	                
	            if((A[0][i] != '_') && (A[0][i] == A[1][i]) && (A[0][i] == A[2][i])){
                    if(A[0][i] == 'X')
                        wonx++;
                    else
                        wono++;
                }
	                
	        }
	        if((A[0][0] != '_') && (A[0][0] == A[1][1]) && (A[0][0] == A[2][2])){
                if(A[0][0] == 'X')
                    wonx++;
                else
                    wono++;
            }
	        if((A[0][2] != '_') && (A[0][2] == A[1][1]) && (A[0][2] == A[2][0])){
                if(A[0][2] == 'X')
                    wonx++;
                else
                    wono++;
            }

	        if((wonx == 1) && (wono == 1))
	            cout<<3<<endl;
	        else if((wonx == 1) || (wono == 1)){
	            cout<<1<<endl;
	        }
	        else{
	            if(count_ == 0)
	                cout<<1<<endl;
	            else{
	                cout<<2<<endl;
	            }
	        }
	    }
	    getchar();
	}
	return 0;
}
