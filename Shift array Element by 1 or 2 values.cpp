#include <iostream>
using namespace std;

// right shift by 1 element
void Shifting1(int arr[],int n){
    int temp=arr[n-1];
    
	for(int i=n-1;i>=1;i--){
		arr[i]=arr[i-1];
	}
	
	arr[0]=temp;
}

//right shift by 2 element
void Shifting2(int arr[],int n){
	int temp = arr[n-1];
	int temp1 = arr[n-2];
	
    for(int i=n-1;i>=2;i--){
    	arr[i]=arr[i-2];
	}
	for(int j=n-2;j>=1;j--){
		arr[j]=arr[j-2];
	}
	
	arr[0]=temp1;
	arr[1]=temp;
}

int main(){
	int arr[]= {10,20,30,40,50,60,70};
	int n=7;

	
	Shifting1(arr,n);
	cout<<"For 1 shift";
	for (int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	Shifting2(arr,n);
	cout<<"For 2 shift";
	for (int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
}

