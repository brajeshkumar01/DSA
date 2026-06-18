class Solution {
public:
    double angleClock(int hour, int minutes) {
        
          double hourangle = 30 * hour + 0.5 * minutes;

          double minutsangle =  6 * minutes;
          double ans = abs(hourangle - minutsangle);

          return min(ans , 360 - ans);
    }
};