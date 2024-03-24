#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,5,3,8,5,6,8,0,4,3,5,7,8};
	int n=13;
	int i,temp,j;
	
	for(i=0; i<n-1; i++){
		for(j=i+1;j<n;j++){
			if (arr[j]<arr[i]){
			temp = arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}