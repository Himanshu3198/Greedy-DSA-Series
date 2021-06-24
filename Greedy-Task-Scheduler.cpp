// 621. Task Scheduler

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char,int>count;
        
        for(char c:tasks){
            
            count[c]++;
        }
        
        priority_queue<int>pq;
        
        for(auto it:count){
            
            pq.push(it.second);
        }
        
        
        int time,res=0;
        
        while(!pq.empty()){
            
            
            time=0;
            vector<int>temp;
            for(int i=0;i<n+1;++i){
                
                if(!pq.empty()){
               temp.push_back(pq.top()-1);
                pq.pop();
                    time++;
                }
              
            }
            
            for(auto it:temp){
                if(it) pq.push(it);
            }
            
            res+=(pq.empty())?time:n+1;
            
        }
        return res;
        
        
    }
};
