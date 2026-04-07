class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         
         unordered_map<string , vector<string>>ans;
            for(const auto& str : strs){
                  string sortstr = str;

                  sort(sortstr.begin() , sortstr.end());
                  ans[sortstr].push_back(str);
            }
              vector<vector<string>>result;
              for(const auto& entry : ans){

                    result.push_back(entry.second);
              }
                return result;
    }
};