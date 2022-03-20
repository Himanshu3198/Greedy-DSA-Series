//    time complexity o(n)
//    space complexity O(1)
class Solution {
public:
    int countCollisions(string s) {
     
        int n=s.size();
        int res=0;
       
        
        for(int i=1;i<n;i++){
            
            
            if(s[i-1]=='R' and s[i]=='L'){
                
                res+=2;
                s[i]='S';
                s[i-1]='S';
            }else if(s[i-1]=='R' and s[i]=='S'){
                res+=1;
                 s[i]='S';
                s[i-1]='S';
                
            }else if(s[i-1]=='S' and s[i]=='L'){
                  res+=1;
                 s[i]='S';
                s[i-1]='S';
            }
            
        }
        
        for(int i=n-1;i>=0;i--){
                
               if(s[i+1]=='L' and s[i]=='R'){
                
                res+=2;
                s[i]='S';
                s[i+1]='S';
            }else if(s[i+1]=='S' and s[i]=='R'){
                res+=1;
                 s[i]='S';
                s[i+1]='S';
                
            }else if(s[i+1]=='L' and s[i]=='S'){
                  res+=1;
                 s[i]='S';
                s[i+1]='S';
            }
        }
        
        
        return res;
          
    }
};
