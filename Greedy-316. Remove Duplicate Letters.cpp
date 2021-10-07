// 316. Remove Duplicate Letters

class Solution {
public:
    string removeDuplicateLetters(string s) {
     
        
         vector<int>dict(256,0);
        vector<int>vis(256,0);
        
        string result="0";
        
        for(char c:s){
            
            dict[c-'a']++;
        }
        
        for(char c:s){
            
            dict[c-'a']--;
            if(vis[c-'a']) continue;
            
            

            
            while(c<result.back() and dict[result.back()-'a']){
                   vis[result.back()-'a']=0;
                result.pop_back();
              
            }
             
             vis[c-'a']=1;
            result+=c;
        }
        
        return result.substr(1);
        
      
        
        
    }
};
