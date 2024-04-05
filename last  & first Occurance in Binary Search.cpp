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

int firstoccurance(int arr[],int n,int target){
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	int ans = -1;
	
	while (s<=e){
		if(arr[mid]==target){
		      ans = mid;
			  e = mid - 1;			
		}
		
		else if(arr[mid]<target){
			s = mid + 1;
		}
		
		else {
			e = mid - 1;
		}
		mid = (s+e)/2;
	}
	return ans;
}

int lastoccurance(int arr[],int n,int target){
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	int ans = -1;
	
	while (s<=e){
		if(arr[mid]==target){
			ans = mid;
			s = mid + 1;
		}
		
		else if(arr[mid]<target){
			s = mid + 1;
		}
		
		else {
			e = mid - 1;
		}
		mid = (s+e)/2;
	}
	return ans;
}


int main(){
	int arr[]= {10,30,30,40,50,60,70};
	int n = 7;
	int target = 30;
	
	int index = binarysearch(arr,n,target);
	
	if (index == -1){
		cout<<"Element not founs ";
	}
	else{
		cout<<"Element is present at :"<<index<<" index"<<endl;
	}
	
	int first = firstoccurance(arr,n,target);
	cout<<"First occurance : "<<first<< " index"<<endl;
	
	int last = lastoccurance(arr,n,target);
	cout<<"last occurance : "<<last<<" index"<<endl;
	
//	totaloccurance
	cout<<"totaloccurance : "<<last - first + 1<<endl;
	
	
	return 0;
}
