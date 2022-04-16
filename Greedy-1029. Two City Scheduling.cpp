class Solution {
public:
//      time complexity(nlog(n))
//     in this problem sorting by first value or second will not work because we don't 
//     known which value first or second is mininum therefore we sort by it difference
//     is descending order when value is greater than one choose first value else second
    static bool cmp(const vector<int>&v1,const vector<int>&v2){
        return (v1[1]-v1[0])>(v2[1]-v2[0]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int n=costs.size();
        sort(costs.begin(),costs.end(),cmp);
        int result=0;
        for(int i=0;i<n;i++){
            if(i<n/2)
                result+=costs[i][0];
            else
                result+=costs[i][1];
        }
        return result;
      
    }
};
