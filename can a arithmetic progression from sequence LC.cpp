class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int s = arr[1]-arr[0];
        for(int i =0;i<n-1;i++){
            if (arr[i]+s != arr[i+1]){
                return false;
            }
        }
        return true;
    }
};