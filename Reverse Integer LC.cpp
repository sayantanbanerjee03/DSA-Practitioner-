class Solution {
public:
    int reverse(int x) {
        int k;
        
       long sum=0;
        while(x!=0){
            k=x%10;
            sum=sum*10+k;
            x=x/10;
        }
        if(sum > 2147483647 || sum < -2147483648){
            return 0;
        }
        return sum;
    }
};