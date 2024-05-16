class Solution {
public:
    bool judgeSquareSum(int c) {
        int x = sqrt(c);
        int j=x;
        long a=0,b=0;
        if(x*x==c) return true;
        for(int i=1;i<=x;i++){
            a=i*i; b=j*j;
            if(a+b==c){
                return true;
            }
            else if(a+b<c){
                // i++;
                continue;
            }
            else if(a+b>c){
                j--;
            }

        }
        
        return false;
    }
};