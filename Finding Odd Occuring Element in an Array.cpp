//Finding Odd Occuring Element
#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	while(s<=e){
		if(s==e){
			return s;
		}
		
		if(mid & 1){
			if(mid-1 >= 0 && arr[mid-1] == arr[mid]){
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}
		else{
			if(mid+1<n && arr[mid+1]==arr[mid]){
				s=mid+2;
			}
			else{
				e=mid;
			}
		}
		mid=s+(e-s)/2;
	}
	return -1;
}

int main(){
	int arr[] = {10,10,20,20,40,40,50,50,70,30,30};
	int n = 11;
	
	int ansIndex = findOddOccuringElement(arr,n);
	
	cout<<"Final ans is : "<<arr[ansIndex]<<endl;
	return 0;
}