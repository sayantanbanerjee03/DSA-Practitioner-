class Solution {
public:
    double slidingwindow(vector<int>& nums, int& k) {
        // int maxsum = 0;
        int sum = 0; 
        int i = 0,j = k-1;

        for(int x=i;x<=j;x++)
            sum += nums[x];
        int maxsum = sum;
        j++;
        while(j<nums.size()){
            sum -= nums[i++];
            sum += nums[j++];
            maxsum = max(maxsum, sum);
        }
        double maxavg = maxsum / (double) k;
        return maxavg;
    }
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingwindow(nums , k);
    }
};