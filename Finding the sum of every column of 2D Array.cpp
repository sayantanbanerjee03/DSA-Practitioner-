#include <iostream>
using namespace std;

void colsum(int arr[2][2],int row, int col){
	int sum;
	
	for(int i=0;i<row;i++){
		sum = 0;
		for(int j=0;j<col;j++){
			sum = sum + arr[i][j];
		}
		cout<<sum<<endl;
	}
}

int main(){
	int arr[2][2]={
		{10,20},
		{30,9}
	};
	
	int row = 2;
	int col = 2;
	
	cout<<"The sum of every Column Present in the array shown : "<<endl;
	colsum(arr,row,col);	
}