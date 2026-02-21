class Solution {
public:
    bool isValid(string s) {
        
         stack<int>stack;
         for(char ch : s){

              if(ch == '(' || ch == '{'|| ch == '['){
                      
                       stack.push(ch);
              }else{

                   if(stack.empty()){

                       return false;
                   }

                     char top = stack.top();
                     stack.pop();

                     if((ch == ')' && top != '(')||
                        (ch == '}' && top != '{')||
                        (ch == ']' && top != '[')){

                             return false;
                        }
                }
         }
            return stack.empty();
    }
};