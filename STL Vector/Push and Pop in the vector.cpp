#include <iostream>
#include <vector>
using namespace std;

// // InPut & OutPut of the Inserted Vector;

int print(vector<int> v){
	int size = v.size();
	for (int i=0;i<size;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> v;
	
	//inserting;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
   	 print(v); 
    
	//POP every time you call its will pop one one element from the array;
	v.pop_back(); // LIFO 
	print(v);	
	
	v.pop_back();
	print(v);
} 
