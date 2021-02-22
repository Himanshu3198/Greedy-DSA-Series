
// activity selection problem
// time complexity O(nlogn)+O(n)
#include<bits/stdc++.h>
using namespace  std;
 // } Driver Code Ends


bool myCmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int activitySelection(int start[], int end[], int n) {
    
    vector<pair<int, int>> jobTime;
    
    for(int i = 0; i < n; i++) {
        jobTime.push_back({start[i], end[i]});
    }
    
    sort(jobTime.begin(), jobTime.end(), myCmp);

    int count = 1;
    pair<int, int> last = jobTime[0];
    
    for(int i = 1; i < n; i++)
    {
        if(jobTime[i].first >= last.second)
        {
            count++;
            last = jobTime[i];
        }
        
    }
    
    return count;
}


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        
        cout << activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
