#include <bits/stdc++.h>
#include <fstream>
using namespace std;

//euclidean gcd
long int gcd(long int a, long int b){
    return b ? gcd (b, a % b) : a;
}

int main() {
	ofstream fout;
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// long int T;
	// cin>>T;

	fout.open("iss.txt");

	// while(T--){
	    long int m, A, B, sum=0;
	    cin>>m;
	    for(long int k = 1; k <= m; k++){
			sum = 0;
			for(long int i=1 ; i<=2*k; i++){
				A = (k + i*i);
				B = (k + (i+1)*(i+1));
				sum += gcd(A, B);
			}
			fout<<"k: "<<k<<" Sum: "<<sum<<endl;
			//cout<<sum<<endl;
		}
	// }
	fout.close();
	return 0;
}
