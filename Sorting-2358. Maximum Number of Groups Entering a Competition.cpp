class Solution {
public:
    int maximumGroups(vector<int>& nums) {
        
        int n=nums.size(),group=1,i=0,cnt=0,lastSum=0,j,sum;
        sort(nums.begin(),nums.end());  
        while(i<n){
            j=i,sum=0;
            while(j<n && cnt<group){
              sum+=nums[j++];
              cnt++;
            }
            if(sum>lastSum && cnt==group){
                group++;
                lastSum=sum;
            }else
                lastSum+=sum;
            i=j,cnt=0;
        }
        return group-1;
    
    }
};
