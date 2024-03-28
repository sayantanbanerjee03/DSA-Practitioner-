#include <iostream>
using namespace std;

void negativeshifting(int arr[] ,int n){
	int j=0;
	
	for(int i=0;i<n;i++){
		if (arr[i]<0){
			swap(arr[i],arr[j]);
			j++;
		}		
	}
}

int main (){
	int arr[] = {-10,20,45,87,-3,98,-6};
	int n = 7;
	
	negativeshifting(arr,n);
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
}