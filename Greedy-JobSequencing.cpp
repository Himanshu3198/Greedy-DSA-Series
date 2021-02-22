// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 


// time complexity O(nlogn)+O(n*m)
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends


// Prints minimum number of platforms reqquired 
 bool comparator(Job a,Job b){
         return (a.profit>b.profit);
     }
class Solution {
  public:
  
  
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comparator);
        int max_submit=arr[0].dead;
        
        for(int i=1;i<n;i++){
            
            max_submit=max(max_submit,arr[i].dead);
        }
        
        bool slot[max_submit+1]={false};
        
        int total_job=0,total_profit=0;
        
        
        for(int i=0;i<n;i++){
            
            
              for(int j=arr[i].dead;j>0;j--){
                  
                  if(slot[j]==false){
                      slot[j]=true;
                      total_job++;
                      total_profit+=arr[i].profit;
                      break;
                      
                  }
              }
        }
        
        vector<int> vec;
        vec.push_back(total_job);
        vec.push_back(total_profit);
        
        return vec;
        
      
        
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends


//   input :N = 4
// Jobs = (1,4,20)(2,1,10)(3,1,40)(4,1,30)
// Output:
// 2 60