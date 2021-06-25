

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        int curr_gas;
        int start=0,end=1;     //   initialize starting point  and ending point of journey 
        curr_gas=gas[start]-cost[start];           // intialize  current gas in vehicle
        
        if(n==1){                                           // edge cases when n==1
          if(gas[0]<cost[0]){
              return -1;
          }
            else{
                return 0;
            }
        }
		
	//	 iterate till end point not equal to start point
	//  cur_gas<0 is the codition when we complete  the journey but gas at  some station  has been exhausted
	//     if we not use this condtion then we will get last index as answer
        while(end!=start or curr_gas<0 ){            
            
            
            while( curr_gas<0){
                // changing the starting point of journey  if the gas is not sufficient
                curr_gas-=gas[start]-cost[start];
                start=(start+1)%n     // increment the index  according to circular queue
                
                if(start==0){     // condtion when we reach to starting point again after moving from one station to another  
                    return -1;
                }
            }
            
           
            
            curr_gas+=gas[end]-cost[end];    //just adding the fuel while moving from one station to another
            end=(end+1)%n;
        }
        
        return start;   // returing the starting point of journey 
        
        
    }
};
