#include<iostream>
#include<vector>
using namespace std;

void waveprintmatrix(vector<vector<int>>v){
	int m = v.size();
	int n = v[0].size();
	
	for(int i=0;i<n;i++){
		if((i & 1)==0){
			for(int j=0;j<m;j++){
				cout<<v[j][i]<<" ";
			}
		}
		else{
			for(int j=m-1;j>=0;j--){
				cout<<v[j][i]<<" "; 
			}
		}
	}
}


int main(){
	vector<vector<int>>v = {
	    {1,8,9,16},
	    {2,7,10,15},
	    {3,6,11,14},
	    {4,5,12,13}
    };
    
    waveprintmatrix(v);
    
    return 0;
}