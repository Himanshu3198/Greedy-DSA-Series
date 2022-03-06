// Program to find minimum number of platforms
// required on a railway station


// time complexity O(N)+O(NLOGN)
#include <bits/stdc++.h>
using namespace std;




   int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	
    	  /* a train will not come on platform until the platfom is free
    	     so departure time should be less than arrival time
    	     
    	     algo : if departure time is greater than current arrival time then
    	            check for all arrival time and increase the platform required
    	            when  a departure time become less than arrival time means 
    	            train is depart and platform is free so reduce platform required */  
    	  
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	
    	int miniRequired=1;
    	int needed=1;
    	
        
           int i=1;
           int j=0;
           
           
           while(i<n and j<n){
               
               
               if(dep[j]>=arr[i]){
                   i++;
                   needed++;
               }else{
                   
                   needed--;
                   j++;
               }
               
               miniRequired=max(needed,miniRequired);
           }
           
           return miniRequired;
    }
// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
} 



// input

// Input: N = 6 
// arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
// dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
// Output: 3
