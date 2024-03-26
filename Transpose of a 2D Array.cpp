#include<iostream>
using namespace std;

int transmatrix (int arr[3][3], int row, int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[j][i]<<" ";
		}
	    cout<<endl;
	}
return 0;
}

int main (){
	int arr[3][3]={
		{10,20,55},
		{4,5,200},
		{2,30,70}
	};
	
	int row = 3;
	int col = 3;
	
	transmatrix(arr,row,col);
	
}