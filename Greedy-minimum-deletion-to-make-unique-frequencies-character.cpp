1647. Minimum Deletions to Make Character Frequencies Unique

class Solution {
public:
    int minDeletions(string s) {
     
             map<int,int>mp;
        map<int,int>::iterator it;
        
          int size=INT_MIN;
        vector<int>freq(26,0);
        for(int i=0;i<s.length();i++){
            
            
            freq[s[i]-'a']++;
        }
        
        
          int count=0;
        
        
        for(int i=0;i<26;i++){
           
              if(freq[i]==0) continue;
            
            
              else if(mp.find(freq[i])!=mp.end()){
                   
                   freq[i]--;
                    count++;
                     i--;
               }
            
                else{
                    
                    mp[freq[i]]=1;
                }
            
             
        }
        
        
    
      
        return count;
        
        
            
 
    }
};
