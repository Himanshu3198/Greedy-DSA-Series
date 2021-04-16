// 452. Minimum Number of Arrows to Burst Balloons

#include<bits/stdc++.h>
using namespace std;


// bool sortcol( const vector<int>& v1,
//                const vector<int>& v2 ) {
//  return v1[1] < v2[1];
// }

int solve(vector<vector<int>>&points){
       sort(points.begin(),points.end());
    for(int i=0;i<points.size();i++){
        for(int j=0;j<points[0].size();j++){
            cout<<points[i][j]<<" ";
        }
        cout<<"\n";
    }
   

    int count=1;
     int BurstPossible=points[0][1];


     for(int i=1;i<points.size();i++){

        if(points[i][0]>BurstPossible){
              count++;
            BurstPossible=points[i][1];
          
        }
        
     }
        
        return count;
}

int main(){

    vector<vector<int>>vec={ {10,16},{2,8},{1,6},{7,12}};

   cout<< solve(vec)<<"\n";
    return 0;
}
