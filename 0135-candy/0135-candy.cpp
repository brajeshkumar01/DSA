class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size();
        vector<int>toffees(n , 1);

         // left to right

         for(int i = 1; i<n; i++){

               if(ratings[i] > ratings[i-1]){

                     toffees[i] = toffees[i-1]+1;    
               }
         }

         // right to left

            for(int i = n-2; i >= 0; i--){

                 if(ratings[i] > ratings[i+1]){

                     toffees[i] = max(toffees[i], toffees[i+1]+1);
                 }
            } 
               int maxtoffees = 0;

               for(int i = 0; i<n; i++){

                    maxtoffees += toffees[i];
               }
                  
                   return maxtoffees;
    }
};
















