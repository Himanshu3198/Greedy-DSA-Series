// 179. Largest Number

//    time complexity : M*NLog(N) where M is  length of string
class Solution {
public:
    
     bool static comp(string s1,string s2){
         
         if((s1+s2)>(s2+s1)){
             return true;
         }
         return false;
     }
    string largestNumber(vector<int>& nums) {
        
        
          vector<string>ans;
        
        
        for(auto it:nums){
            
            ans.push_back(to_string(it));
        }
        
        sort(ans.begin(),ans.end(),comp);
        
        
         string res="";
        
        for(auto it:ans){
            res+=it;
        }
        
        
       return res[0]=='0'?"0":res;
    }
};
