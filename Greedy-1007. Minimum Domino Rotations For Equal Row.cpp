//  time complexity O(4*n)
class Solution {
public:
     
      int rotateDomino(int target,vector<int>a,vector<int>b){
          
           int swap=0;
          
          for(int i=0;i<a.size();i++){
               if(a[i]==target) continue;
             if(a[i]!=target and b[i]!=target) return INT_MAX;
              
              swap++;
          }
          
          return swap;
          
            
      }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
      
        
         int result=INT_MAX;
        
          
           result=min({result,rotateDomino(tops[0],tops,bottoms),rotateDomino(tops[0],bottoms,tops),
                      rotateDomino(bottoms[0],tops,bottoms),rotateDomino(bottoms[0],bottoms,tops)});
        
         return result==INT_MAX?-1:result;
    }
};
