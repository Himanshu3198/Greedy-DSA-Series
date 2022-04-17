//  time complexity O(n)
//  space complexity O(n)
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        int n=tasks.size();
        unordered_map<int,int>mp;
        for(auto &it:tasks) mp[it]++;
        int result=0;
        for(auto it:mp){
            if(it.second==1) return -1;
            
            long long int x=it.second;
            if(x>=3){
                 if(x%3>0){
                result+=(x/3 +1);
            }else{
                result+=(x/3);
            }
            }else{
                result+=(x/2);  
            }
           
        }
        return result;
    }
};
