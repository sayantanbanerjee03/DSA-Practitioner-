#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector< vector <int> > brr;
	
	vector <int> vect1(10,0);
	vector <int> vect2(9,0);
	vector <int> vect3(8,0);
	vector <int> vect4(7,0);
	vector <int> vect5(6,0);
	vector <int> vect6(5,0);
	
	brr.push_back(vect1); 
	brr.push_back(vect2); 
	brr.push_back(vect3); 
	brr.push_back(vect4); 
	brr.push_back(vect5); 
	brr.push_back(vect6); 
	
	for (int i=0;i<brr.size();i++){
		for(int j=0;j<brr[i].size();j++){
			cout<<brr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}