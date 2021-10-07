860. Lemonade Change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
         
             int n=bills.size();
           int five=0,ten=0,twen=0;
        
            for(auto it:bills){
              
              if(it==5){
                  five++;
              }
              else if(it==10){
                  ten++;
              }
              else{
                  twen++;
              }
          }
        
          if( ten==n or twen==n){
              return false;
          }
        ten=0,five=0,twen=0;
        
        
          for(auto it:bills){
              
              if(it==5){
                  five++;
                  continue;
              }
              
              if(it==10){
                  
                  if(five>=ten){
                      five--;
                  }
                  ten++;
              }
              else if(it==20){
                  
                    if(ten>=1 and five>=1){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
                  
              }
              
              
          }

        
        return true;
    }
};
