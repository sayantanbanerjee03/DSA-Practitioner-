class Solution {
public:
	
    int findpivotindex (vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<=e){
            if (s==e){
                return s;
            }

            if(mid+1 < n && nums[mid]>nums[mid+1])
                return mid;
            
            else if(mid-1>=0 && nums[mid]<nums[mid-1])
                return mid-1;
            
            else if(nums[s]>nums[mid])
                e=mid-1;
            
            else
                s=mid+1;
            
            mid=s+(e-s)/2;
        }
        return -1;
    }

    int binarysearch(vector<int>& nums, int s,int e, int target){
        int mid = s+(e-s)/2;
        while (s<=e){
            if (nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                s=mid + 1;
            }
            else {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotindex = findpivotindex(nums);
        int n = nums.size();
        int ans=-1;
        
        if(target>=nums[0]&&target<=nums[pivotindex]){
            ans = binarysearch(nums, pivotindex, 0, target);
        }
        else{
            ans = binarysearch(nums,pivotindex+1,n-1,target);
        }
        return ans;       
    }
};