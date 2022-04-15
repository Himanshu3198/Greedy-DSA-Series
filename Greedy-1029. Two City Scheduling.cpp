class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        
        int n=costs.size();
        sort(costs.begin(),costs.end());
        
        
        int res1=0,res2=0;
        for(int i=0;i<n;i++){
            
            res1+=costs[i][0];
            
        }
        for(int i=0;i<n;i++){
            res2+=costs[i][1];
        }
        return min(res1,res2);
    }
};
