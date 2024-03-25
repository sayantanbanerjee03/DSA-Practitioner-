#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<char>  v ;	
	
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	
	cout<<"Front element of the vector :"<<v.front()<<endl; // Print Front element of the vector;
	cout<<"End Element of the vector :"<<v.back()<<endl;  // Print End element of the vector;
}