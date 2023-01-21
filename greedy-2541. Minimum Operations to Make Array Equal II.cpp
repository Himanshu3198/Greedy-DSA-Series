class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        
        if(nums1==nums2) return 0;
        long long ans=0,inc=0,dec=0,sum1=0,sum2=0;
        for(auto it:nums1 ) sum1+=it;
        for(auto it:nums2) sum2+=it;
        if(sum1!=sum2 || !k) return -1;

        for(int i=0;i<nums1.size();i++){
            if(nums1[i]==nums2[i]) continue;
            if(nums1[i]>nums2[i]){
                int curOp=nums1[i]-nums2[i];
                if(curOp%k==1) return -1;
                ans+=(curOp/k);
                dec+=(curOp);
            }else{
                int curOp=nums2[i]-nums1[i];
                if(curOp%k==1) return -1;
                ans+=(curOp/k);
                inc+=curOp;
            }
        }
        if(inc==0 || dec==0) return ans==0?-1:ans;
        if(inc==dec) return (ans/2)==0?-1:ans/2;
        return -1;
    }
};
