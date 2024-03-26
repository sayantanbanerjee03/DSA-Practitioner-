#include <iostream>
using namespace std;

void aarr(int arr[][4],int row,int col){
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int arr[][4]={
		{10,20,30,3},
		{20,10,50,30},
		{10,50,20,60},
		{60,70,80,90}
	};
	
	int row = 4;
	int col = 4;
	
	aarr(arr,row,col);
}
