#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target){
	int s=0;
	int e=n-1;
	int mid = (s+e)/2;
	
	while (s<=e){
		if(arr[mid]==target){
			return mid;
		}
		
		else if(arr[mid]<target){
			s = mid + 1;
		}
		
		else {
			e = mid - 1;
		}
		mid = (s+e)/2;
	}
	return -1;
}

int main(){
	int arr[]= {10,20,30,40,50,60,70};
	int n = 7;
	int target = 50;
	
	int index = binarysearch(arr,n,target);
	
	if (index == -1){
		cout<<"Element not founs ";
	}
	else{
		cout<<"Element is present at :"<<index<<" index";
	}
	return 0;
}
