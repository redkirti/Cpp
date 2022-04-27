#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short int T;
    cin>>T;
    while(T--){
        long int N, u, v;
        long long X;
        cin>>N>>X;

    	vector<long int> adj[N+1];
    	
    	for(long int i = 1; i<=N; i++){
    	    cin>>u>>v;
    	    adj[u].push_back(v);
    	   // adj[v].pushback(u);
    	}
    	
    	for(long int i = 1; i<=N; i++){
    	    long int max=adj[i][0], temp=0;
    	    for(long int j = 0; j<adj[i].size();j++){
    	        for(long int k =j+1; k<adj[i].size();k++){
    	            if(adj[adj[i][j]].size()<adj[adj[i][k]].size()){
    	                max = adj[i][k];
    	                temp = adj[i][j];
    	                adj[i][j] = adj[i][k];
    	                adj[i][k] = temp;
    	            }
    	        }
    	    }
    	}
    	
    	
    	for(long int i = 1; i<N; i++){
    	   for (int j = 0; j < adj[i].size(); j++) {
                cout<<"j = "<<j<<" value is : "<<adj[i][j]<<" ";
            }
            cout<<endl;
    	}
    	
    	
    	
    	
    }
	
	return 0;
}
