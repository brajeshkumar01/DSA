class Solution {
public:
    vector<string>st;

    void solved(int n , string s){

           if(s.size() == n){

                st.push_back(s);
                return;
           }

             for(char c : {'a' ,'b', 'c'}){

                   if(s.empty() || s.back() != c)

                      solved(n , s+c);
             }
                 
    }
    string getHappyString(int n, int k) {
        
           solved(n , "");

           return k > st.size() ? "" : st[k-1];
    }
};