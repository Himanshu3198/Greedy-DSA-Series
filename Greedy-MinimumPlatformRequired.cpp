// Program to find minimum number of platforms
// required on a railway station


// time complexity O(N)+O(NLOGN)
#include <bits/stdc++.h>
using namespace std;





int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	
	sort(arr,arr+n);
	sort(dep,dep+n);
	
	vector<pair<int,int>> vec;
	for(int i=0;i<n;i++){
	    vec.push_back(make_pair(arr[i],dep[i]));
	}
	
	
	int max_platform=1;
	int required_platform=1;
	


    int i=1,j=0;
    while(i<n && j<n){
        
           if(vec[i].first<=vec[j].second){
               max_platform++;
               i++;
               
           }
           else{
               max_platform--;
               j++;
           }
           
           required_platform=max(required_platform,max_platform);
           
    }
    
    return required_platform;
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