#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long#define pb push_back
#define mp make_pair

bool sortcol(const vector<double>& v1, const vector<double>& v2){
	return v1[0] > v2[0];
}

int main(){
	fast
	short int T;
	cin>>T;
	while(T--){
		short int N, M;
		cin>>N>>M;
		vector<vector<double>> vect;
		int V, P, sum = 0, j=0;
		for(int i=0; i<N; i++){
			cin>>V>>P;
			double temp = double(V)/double(P);
			if((P/2) < M){
				vector<double> v;
				v.push_back(temp);v.push_back(V);v.push_back(P);
				vect.push_back(v);
			}
		}
		sort(vect.begin(), vect.end(), sortcol);
		bool flag = false;
		while(j<vect.size()){
            if(vect[j][2]<=M){
                sum += vect[j][1];
                M -= vect[j][2];
                j++;
            }
            else if((flag == false)&&((vect[j][2]/2)<=double(M))){
                flag = true;
                sum += vect[j][1];
                M -= (vect[j][2]/2);
                j++;
            }
            else
                j++;
		}
		cout<<sum<<"\n";
	}
	return 0;
}