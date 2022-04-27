#include <iostream>
#include <cmath>
using namespace std;

int main() {
	short int T;
	cin>>T;
	while(T--){
	    long int N, M, count=0;
	    cin>>N>>M;
	    for(int i = 1; i<N ;i++){
	        for(int j = i+1; j<=N; j++){
	            if(((M%i)%j) == ((M%j)%i))
	                count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
