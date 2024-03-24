#include <iostream>
using namespace std;

void Sort (int arr[], int n){

	int zero=0,one=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
		    zero++;
		}
		if (arr[i]==1){
			one++;
		}
	}
	int i;
	for (i=0;i<zero;i++){
	    arr[i]=0;	
	}
	for (int j=i;j<n;j++){
		arr[j]=1;
	} 
}

int main(){
	int arr[] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
	int n = 16;
	
    Sort(arr,n);
    
    for(int i;i<n;i++){
	    cout<<arr[i]<<" ";	
	}
}