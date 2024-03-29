class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool sortingapproach(int arr[], int n, int x){
	    int l=0;
	    int h=n-1;
	    int csum=0;
	    
	    while(l<h){
	        csum = arr[l]+arr[h];
	        if(csum == x){
	            return true;
	        }
	        else if(csum < x){
	            l++;
	        }
	        else{
	            h--;
	        }
	    }
	    return false;
	}
	
	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
        return sortingapproach(arr,n,x);
	}
};