
// 1578. Minimum Deletion Cost to Avoid Repeating Letters

class Solution {
public:
  
    int minCost(string s, vector<int>& cost) {
        
        
        int ans=0;
        int index=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(s[index]==s[i]){
                if(cost[index]<=cost[i]){
                    ans+=cost[index];
                    index=i;
                }
                else{
                   ans+=cost[i]; 
                }
            }
            else{
                index=i;
            }
        }
        return ans;

    }
};
