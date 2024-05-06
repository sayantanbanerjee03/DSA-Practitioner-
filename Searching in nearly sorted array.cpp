// searching element in the nearly sorted array
#include <iostream>
using namespace std;

int searchnearlysorted(int arr[], int n, int target){
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	
	while (s<=e){
		if(mid - 1 >= 0 && arr[mid - 1] == target){
			return mid-1;
		}
		if(arr[mid]==target){
			return mid;
		}
		if(mid+1 < n && arr[mid + 1] == target){
			return mid+1;
		}
		if(target > arr[mid]){
			s = mid + 2;
		}
		else{
			e = mid - 2;
		}
		mid = s+(e-s)/2;
	}
	return -1;
}

int main (){
	int arr[] = {20,10,30,50,40,70,60};
	int n = 7;
	int target = 20;
	
	int targetindex = searchnearlysorted(arr,n,target);
	
	if(targetindex == -1){
		cout<<"element not found"<<endl;
	}
	else{
		cout<<"Element is found in Index : "<<targetindex<<endl;
	}
	return 0;
}