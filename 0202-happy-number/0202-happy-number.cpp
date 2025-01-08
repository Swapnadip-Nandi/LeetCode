class Solution {
public:
    bool isHappy(int n) {
        while (true) {
            int sum = 0;
            while (n != 0) {
                int lastDigit = n % 10;
                n /= 10;
                sum += lastDigit * lastDigit;
            }
            if (1 <= sum && sum <= 9) {
                return (sum == 1 || sum == 7);
            } else {
                n = sum;
            }
        }
    }
};
