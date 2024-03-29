class Solution
{
    public:
    
    void move-veleft(int arr[],int n){
        int l=0,h=n-1;
      
        while(l<h){
            if(arr[l]<0){
                l++;
            }
            else if (arr[h]>0){
                h--;
            }
            else{
                swap(arr[l],arr[h]);
            }
        }
    };
    
    void sort012(int a[], int n)
    {
        code here 
        int b = sizeof(a)/sizeof(int);
        

        move-veleft(arr,n);
        for(int i=0;i<b;i++){
            cout<<a[i]<<" ";
        }
    }
    
};