
//  time complexity O(n)
//  space complexity O(1)
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        
         int n=size(nums);
        
        
          int dec=0,res=0;
          
           for(int i=0;i<n;i++){
               
               int idx=i+dec;
                
               if(idx%2==0 and i+1<n and nums[i]==nums[i+1]){
                   res++;
                   dec++;
               }
           }
        
        if((n-res)%2==1){
            res++;
        }
        return res;
        
        
    }
};
