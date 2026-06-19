class Solution {
public:
    double angleClock(int hour, int minutes) {
        
          double hourhand = 30 * hour + 0.5 * minutes;
          double minuteshand = 6 * minutes;

          double ans = abs(hourhand - minuteshand);

          return ans = min(ans , 360 - ans);

          // we can also used direct formula of 30H - 11/2 minutes but here 11/2 == 5 in c++ thats why we can cont used this formula thats why i break and then solved
    }
};