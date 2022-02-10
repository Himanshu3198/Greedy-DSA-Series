class Solution {
public:
    int minTimeToType(string word) {
        
       
        
        int n=word.size();
        
        int res=n;
        
        int x=word[0]-'a';
        res+=min(x,26-x);
       int last=word[0]-'a';
        
        for(int i=1;i<n;i++){
            
            int y=abs(last-(word[i]-'a')); 
            res+=(min(y,26-y));
            last=word[i]-'a';
        }
          
        return res;
    }
};
