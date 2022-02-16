// time complexity O(n)
class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        
        
        multiset<int>st;
        
        for(auto &it:nums1) st.insert(it);
        
        int n=nums1.size();
        vector<int>res(n);
        
        
        for(int i={};i<n;i++){
               auto it=st.upper_bound(nums2[i]);
            if(it==st.end()){
                it= st.begin();
                cout<<*it;
            }
            res[i]=*it;
            st.erase(it);
        
        }
        
        return res;
    }
};
