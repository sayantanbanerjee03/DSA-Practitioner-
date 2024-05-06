// Divide Two Numbers and Search the Answer through Binary Search
#include <iostream>
using namespace std;

int getQuotient(int divident, int divisor){
	int s=0;
	int e=divident;
	int ans = -1;
	int mid = s+(e-s)/2;//quotient
	
	while (s<=e){
		if(mid*divisor == divident){
			return mid;
		}
		
		if (mid*divisor < divident){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}

int main(){
	int divident = 29;
	int divisor = 7;
	
	int ans = getQuotient(abs(divident), abs(divisor));
	
	if((divisor >0 && divident <0) || (divisor <0 && divident > 0)) {
    ans = 0 - ans;
   }
	
	cout<<"Final ans is "<< ans <<endl;
	return 0;
}

