
// 392. Is Subsequence

class Solution {
public:
    
      bool linearSearch(string t,char c,int i){
          
          for(int j=i;j<t.length();j++ ){
              if(t[j]==c){
                  return true;
              }
          }
          return false;
      }
    bool isSubsequence(string s, string t) {
     int start_pos=0;
       for(auto c: s){ // for each character in s
           int found_pos=t.find(c,start_pos);  //find its location in string t, starting from position start_pos
           if(found_pos==-1)
            return false;
           start_pos=found_pos+1;  //
       }
       return true;
        
    }
};
