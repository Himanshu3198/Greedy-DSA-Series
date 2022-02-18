class Solution {
public:
    string removeKdigits(string num, int k) {
        
        
        stack<char>st;
        
        for(auto c:num){
            
            while(st.size()>0 and k>0 and st.top()>c){
                st.pop();
                k--;
            }
            if(st.size()==0 and c=='0'){
                continue;
            }else{
                st.push(c);
            }
        }
        
        while(!st.empty() and k>0){
            st.pop();
            k--;
        }
        
        string res="";
        
        
        while(!st.empty()){
            
            char c=st.top();
            st.pop();
            res+=c;
        }
        if(res=="") return "0";
        reverse(res.begin(),res.end());
        return res;
    }
};
