
// time complexity O(log(n))

// just do reverse thing make target equal to start if target is even then divide it by 2 else
// increament by 1 if start become greater than or equal to target  then we left with decreament 
// operation so operation will be start-target
class Solution {
public:
    int brokenCalc(int start, int target) {
        
          if(start>=target){
              return start-target;
          }
        
         if(target%2==0){
             return 1+brokenCalc(start,target/2);
         }else{
             return 1+brokenCalc(start,target+1);
         }
    }
};
