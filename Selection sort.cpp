//selection sort
#include<iostream>
using namespace std;

void sort(int arr[],int n){
	for(int i = 0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
}

void print(int arr[],int n){
	for(int i=0; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main (){
	int arr[] = {44,33,55,22,11};
	int n = 5;
	
	sort(arr,n);
	print(arr,n);
	return 0;
	
}