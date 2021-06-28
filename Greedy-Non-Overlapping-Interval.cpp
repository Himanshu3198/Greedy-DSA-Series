// 435. Non-overlapping Intervals


class Solution {
public:
    
       bool static cmp(const pair<int,int> &a, const pair<int,int> &b){
    
      if(a.first==b.first) return a.second<b.second;
      return (a.first < b.first);
 
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
      
        
         vector<pair<int,int>> p;
        
        
        for(auto x: intervals){
            p.push_back({x[0],x[1]});
        }
        
        sort(p.begin(),p.end(),cmp);
        
        int ans=0;
        
        int check=0;
        
        int prev;
        for(auto x: p){
            
            if(check==0){
                prev=x.second;
                check=1;
            }else{
                if(x.first<prev){
                    //merge
                      ans+=1;
                      if(x.second<prev) prev=x.second;
                }
                else{
                    //not merge
                    
                   
                    prev=x.second;
                }
            }
        }
        return ans;
    }
};
