class Solution {
public:
    long long sumAndMultiply(int n) {
        
          string str = to_string(n);
          string ans = "";
          long long sum = 0;

          for(int i = 0; i<str.length(); i++){

                   if(str[i] != '0')

                     ans.push_back(str[i]);
          }

              if(ans.empty()){

                   return 0;
              }

                for(int i = 0; i<ans.length(); i++){

                        sum += ans[i]-'0';
                }

                  long long num = stoll(ans);

                if(ans.empty())
                     return 0;

                      return num * sum;
    }
};