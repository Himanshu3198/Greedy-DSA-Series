// time complexity O(nlog(n))
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n=tokens.size();
        
        
        sort(tokens.begin(),tokens.end());
        
        
        int gain=0;
        
        int i=0,j=n-1;
        
        
        
        if(n==1){
            
            return tokens[0]<=power;
        }
        
        while(i<=j){
            
            
            if(power>=tokens[i]){
                
                gain++;
                power-=tokens[i];
                i++;
            }else{
                
                if(i+1<j and gain>0){
                    
                    
                    gain--;
                    power+=tokens[j];
                    j--;
                }else{
                    break;
                }
              
            }
           
            
        }
        return gain;
    }
};
