#include <iostream>
using namespace std;

int main() {
	int T, S, Q[100], E[100], i, L[100][100], j, t =0, temp, sum=0;
	scanf("%d", &T);
	while(T--){
		sum = 0;
	    scanf("%d", &S);
	    
	    for(i = 0; i<S; i++){
	        scanf("%d", &Q[i]);
	    }
	    
	    for(i = 0; i<S; i++){
	        scanf("%d", &E[i]);
	        for(j=0;j<E[i]; j++){
	            scanf("%d", &temp);
				sum+= temp;
	        }
	    }
	    
	    for(i = 0; i<S; i++){
	        for(j=0;j<E[i]; j++){
	            if(j != 0){
	                sum-=Q[i];
	            }
	        }
	    }
	    printf("%d\n", t);
	}
	return 0;
}
