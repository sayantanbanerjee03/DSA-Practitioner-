#include<iostream>
using namespace std;

int main (){
	int arr[2][2];
	int row = 2;
	int col = 2;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the element that will present in "<<i<<"row and"<<j<<"colomn"<<endl;
			cin>>arr[i][j];
		}
	}
	
	cout<<"entered elements are stored as :"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}