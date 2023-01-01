class Solution {
public:
    int minimumPartition(string s, int k) {
        
        int n=s.size();
        int num=s[0];
        long long int i=1,count=0,temp=int(s[0]-'0');
        while(i<n){
            
            int c=int(s[i]-'0');
            temp=temp*10+c;
            if(temp<=k){
                i++;
                continue;
            }
            if(c>k) return -1;
            temp=c;
            i++;
            count++;
        }
        return count+1;
        
    }
};
