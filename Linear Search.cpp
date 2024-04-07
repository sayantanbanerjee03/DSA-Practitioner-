#include <iostream>
using namespace std;

bool lsearch(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]==90){
			return true; // 1 if found
		}
    }
    return false; // 0 if not found
}

int main(){
	int arr[] = {10,20,30,40,50};
	int n = 5;
	
	// for linear search we have to travers the total array
	// for finding the element;
    lsearch(arr,n);
	
    cout<<lsearch(arr,n)<<" ";
	return 0;
}