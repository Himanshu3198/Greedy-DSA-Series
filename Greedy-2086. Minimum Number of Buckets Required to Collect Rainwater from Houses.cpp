class Solution {
public:
    int minimumBuckets(string street) {
        
        
        
         int ans=0;
         int n=street.size();
        
        
        for(int i=0;i<n;i++){
         
            
            if(street[i]=='H'){
                
                if(i-1>=0 and street[i-1]=='B'){
                    continue;
                }
                else if(i+1<n and street[i+1]=='.'){
                    
                    ans+=1;
                    street[i+1]='B';
                    continue;
                }
                else if(i-1>=0 and street[i-1]=='.'){
                    
                    ans+=1;
                    street[i-1]='B';
                    continue;
                }
                else{
                    return -1;
                }
            }
            
        }
        
    
            
            
            return ans;
            
    
        
        
    }
};
