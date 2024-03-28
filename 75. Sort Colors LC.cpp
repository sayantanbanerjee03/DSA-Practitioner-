#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int left = 0;
        int right = n-1;

        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
                i++;
            }

            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
            }
            
            else{
                i++;
            }
        }
    }
};

int main (){
	vector<int> nums;
	
	sortColors(vector<int>& nums);
	
	return 0;
}