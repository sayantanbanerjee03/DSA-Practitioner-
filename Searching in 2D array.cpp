#include <iostream>
using namespace std;

int findtarget(int arr[2][2],int row,int col){             //we took int data type because we have play "return" in the code;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==50){
				return true;
			}
		}
	}
    return false;
}

int main(){
	int arr[2][2]={
		{10,20},
		{30,40}
	};
	
	int row = 2;
	int col = 2;

    findtarget(arr,row,col);
    cout<<"If found the 1 or else 0 : So for the same :"<<findtarget(arr,row,col)<<" ";
}