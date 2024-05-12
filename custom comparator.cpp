//custom comperator
#include <algorithm> //use for small algo shortcut like sorting(sort) ;
#include <iostream>
#include <vector>
using namespace std;

void printvv(vector<vector<int>> &v){
	int n = v.size();
	for(int i =0;i<n;i++){
	    vector<int>&temp=v[i];
    	int a = temp[0];
    	int b = temp[1];
    	cout<<a<<" "<<b<<endl;
	}
	cout<<endl;
}

bool mycomp(vector<int>&a, vector<int>&b){
	return a[1]>b[1];
}

int main (){
	vector<vector<int>>v;
	int n;
	cout<<"enter the size";
	cin >> n;
	for (int i=0;i<n;i++){
		int a,b;
		cout<<"enter a, b"<<endl;
		cin>>a>>b;
		vector<int> temp;
		temp.push_back(a);
		temp.push_back(b);
		v.push_back(temp); 
	}
	cout<<"Here are the values :"<<endl;
	printvv(v);
	cout<<"sorted by 1st index"<<endl;
	sort(v.begin(),v.end(),mycomp);
	printvv(v);
	return 0;
}