#include <iostream>
#include <vector>
using namespace std;

int print(vector<int> v){
	cout<<"Printing Vector with method 2 :"<<endl;
	
	for (auto it:v){
		cout<<it<<" ";
	}
}

int main(){
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
    
    print(v);
}