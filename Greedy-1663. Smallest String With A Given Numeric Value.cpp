//  time complexity 26*n
//  space complexiy O(1)
class Solution {
public:
    string getSmallestString(int n, int k) {
        
          int num=26;
          string result="";
          while(n>0){
              
              if(k-num>=(n-1)){
                  result+=char(num-1+'a');
                  k=k-num;
                  n--;
              }else{
                  num--;
              }
          }
          reverse(result.begin(),result.end());
        
           return result;
        
         
    }
};
