
class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
          priority_queue<int,vector<int>,greater<int>> pq;
          sort(events.begin(),events.end());
          int next=0,attend=0;
          for(int day=1; day<=100000; day++) {
                 while(!pq.empty() && pq.top()<day) pq.pop();
                 while(next<events.size() && events[next][0]==day) {
                      pq.push(events[next++][1]);
                 }
                 if(!pq.empty()) {
                     attend++;
                     pq.pop();
                 }
          }
        return attend;
    }
};
