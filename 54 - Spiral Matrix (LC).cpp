class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int m = matrix.size();
        int n = matrix[0].size();
        int totalelements = m*n;

        int startrow = 0;
        int endrow = m-1;
        int endcol = n-1;
        int startcol = 0;

        int count = 0;
        while (count < totalelements){
            //starting row;
            for(int i=startcol; i<=endcol && count<totalelements;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;

            //ending col;
            for(int i=startrow;i<=endrow && count<totalelements;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;

            //end row;
            for( int i=endcol;i>=startcol && count<totalelements;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;

            //start col;
            for(int i=endrow;i>=startrow && count<totalelements;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
    return ans;
    }
};