#include<iostream>
//#include<limit.h>
using namespace std;

int maxno(int arr[2][2],int row, int col){
	int max_ans;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]>max_ans){
				max_ans=arr[i][j];
			}
		}		
	}
	return max_ans;
}

int main(){
		int arr[2][2]={
		{10,20},
		{30,40}
	};
	
	int row = 2;
	int col = 2;
    
    maxno(arr,row,col);
    cout<<"The max no. Present in the Array is : "<<maxno(arr,row,col);
}