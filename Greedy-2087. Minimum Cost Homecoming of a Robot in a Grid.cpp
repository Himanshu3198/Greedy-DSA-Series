class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        
        
         int x1=startPos[0],x2=homePos[0];
        int y1=startPos[1],y2=homePos[1];
        
        
        int minCost=0;
        
          if(x1==x2 and y1==y2) return 0;
        
        
           if(x1==x2 and y1!=y2){
                 if(y1>y2){
            
            while(y1!=y2){
                
                minCost+=colCosts[--y1];
                ;
            }
        }
        else{
            
            while(y1!=y2){
                minCost+=colCosts[++y1];
            }
        }
               
               
               return minCost;
               
               
           } 
        
        
        
        if(x1!=x2 and y1==y2){
            
               if(x1>x2){
            
            while(x1!=x2){
                
                minCost+=rowCosts[--x1];
            }
        }
        else{
            
            while(x1!=x2){
                minCost+=rowCosts[++x1];
            }
        }
            
            return minCost;
            
            
        }
        
        
        if(x1>x2){
            
            while(x1!=x2){
                
                minCost+=rowCosts[--x1];
                
            }
        }
        else{
            
            while(x1!=x2){
                minCost+=rowCosts[++x1];
            }
        }
        
        
           
        if(y1>y2){
            
            while(y1!=y2){
                
                minCost+=colCosts[--y1];
            }
        }
        else{
            
            while(y1!=y2){
                minCost+=colCosts[++y1];
            }
        }
        
        return minCost;
        
        
        
        
    }
};
