class Solution {
public:
       static bool myCmp(const vector<int>& a, const vector<int>& b) {
        return a[0]== b[0]?a[1]<b[1]:a[0]<b[0];    
    }
    int findMinArrowShots(vector<vector<int>>& points) {
     
         
        sort(points.begin(),points.end(),myCmp);
        int res=1;
        int start=points[0][0],end=points[0][1];
        for(int i=1;i<points.size();i++){
            
            if(end>=points[i][0] && end<=points[i][1]){
                continue;
            }
            else if(end>=points[i][0] && end>=points[i][1]){
                end=points[i][1];
                continue;
            }
                res++;
                end=points[i][1];
        }
            
        return res;
    }
};
