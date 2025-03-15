
//遍历字符串 s，累加相邻字母 ASCII 值的绝对差，即为答案。

class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for (int i = 1; i < s.length(); i++) {
            ans += abs(s[i] - s[i - 1]);
        }
        return ans;
    }
};

