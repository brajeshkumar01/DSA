class Solution {
public:
    vector<string>result;

    bool isvalid(string s){

           int count = 0;
           for(char ch : s){

                  if(ch == '('){

                      count++;
                  }else{

                      count--;
                  }if(count < 0){

                      return false;
                  }
           }
              return count == 0;
    }
       void solved(string &curr , int n){

                if(curr.length() == n * 2){

                      if(isvalid(curr))

                         result.push_back(curr);
                         return; 
                }
                   curr.push_back('(');
                   solved(curr , n);
                   curr.pop_back();

                   curr.push_back(')');
                   solved(curr , n);
                   curr.pop_back();
       }
    vector<string> generateParenthesis(int n) {
        
           string curr = "";
           solved(curr , n);

           return result;
    }
};