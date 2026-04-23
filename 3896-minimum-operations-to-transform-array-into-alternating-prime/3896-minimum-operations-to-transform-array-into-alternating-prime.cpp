class Solution {
public:
    bool isprime(int n){

         if(n <= 1) return false;
         if(n <= 3) return true;
         if(n % 2 == 0 || n % 3 == 0) return false;

           for(int i = 5;  i * i <= n; i+=6){

                if(n % i == 0 || n % (i+2) == 0)
                    return false;
           }
              return true;
    }
    int minOperations(vector<int>& nums) {
        
          vector<int>givennum = nums;
          int count = 0;
          int n = givennum.size();

          for(int i = 0; i<n; i++){

               int num = givennum[i];
               int ops = 0;

               if(i % 2 == 0){

                    while(!isprime(num)){

                           num++;
                           ops++;
                    }
                    }else{

                         while(isprime(num)){

                              num++;
                              ops++;
                         }
                    }
                      count += ops;
               }
          
             return count;
    }
};