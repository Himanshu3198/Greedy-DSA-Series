// time complexity O(nlog(n))
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int n=people.size();
        
        sort(people.begin(),people.end());
        
        int boat=0;
          
        int i=0,j=n-1;
        
        
         while(i<=j){
             
            if(people[i]+people[j]<=limit){
                
                i++;
                j--;
                boat++;
            }else{
                
                boat++;
                j--;
            }
         }
        return boat;
    }
};
